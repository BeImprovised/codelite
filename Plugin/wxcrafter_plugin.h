//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef WXCRAFTER_BASE_CLASSES_H
#define WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stc/stc.h>
#include <wx/button.h>
#include "codelite_exports.h"

class WXDLLIMPEXP_SDK EditDlgBase : public wxDialog
{
protected:
    wxBoxSizer* boxSizer2;
    wxStyledTextCtrl* m_stc10;
    wxBoxSizer* boxSizer4;
    wxButton* m_button6;
    wxButton* m_button8;

protected:

public:
    EditDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Edit Text"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~EditDlgBase();
};

#endif