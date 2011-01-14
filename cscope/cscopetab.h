//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah
// file name            : cscopetab.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
#ifndef __cscopetab__
#define __cscopetab__

/**
@file
Subclass of CscopeTabBase, which is generated by wxFormBuilder.
*/

#include "globals.h"
#include "cscopetabbase.h"
#include "cscopeentrydata.h"
#include "cscopedbbuilderthread.h"

class IManager;
class CscopeTabClientData : public wxTreeItemData
{
	CscopeEntryData _entry;

public:
	CscopeTabClientData(const CscopeEntryData& entry) : _entry(entry) {}
	~CscopeTabClientData() {}

	//Setters
	void SetEntry(const CscopeEntryData& _entry) {
		this->_entry = _entry;
	}
	//Getters
	const CscopeEntryData& GetEntry() const {
		return _entry;
	}
};


/** Implementing CscopeTabBase */
class CscopeTab : public CscopeTabBase
{
	CscopeResultTable *m_table;
	IManager *         m_mgr;
	wxString           m_findWhat;
	StringManager      m_stringManager;
	wxFont             m_font;
	
protected:
	// Handlers for CscopeTabBase events.
	void OnItemActivated( wxTreeEvent& event );
	void OnLeftDClick(wxMouseEvent &event);
	void DoItemActivated( wxTreeItemId &item, wxEvent &event );
	void FreeTable();
	void OnClearResults(wxCommandEvent &e);
	void OnClearResultsUI(wxUpdateUIEvent &e);
	void OnChangeSearchScope(wxCommandEvent &e);

public:
	/** Constructor */
	CscopeTab( wxWindow* parent, IManager *mgr );
	void BuildTable(CscopeResultTable *table);
	void Clear();
	void SetMessage(const wxString &msg, int percent);


	void SetFindWhat(const wxString& findWhat) {
		this->m_findWhat = findWhat;
	}
	const wxString& GetFindWhat() const {
		return m_findWhat;
	}
};

#endif // __cscopetab__
