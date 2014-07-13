//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: SyntaxHighlightBaseDlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef SYNTAXHIGHLIGHTBASEDLG_BASE_CLASSES_H
#define SYNTAXHIGHLIGHTBASEDLG_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/listbox.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/imaglist.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/fontpicker.h>
#include <wx/clrpicker.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/statline.h>
#include <wx/button.h>

class SyntaxHighlightBaseDlg : public wxDialog
{
protected:
    wxListBox* m_listBox;
    wxPanel* m_panel25;
    wxNotebook* m_notebook2;
    wxPanel* m_panel4;
    wxStaticText* m_staticText70;
    wxChoice* m_choiceLexerThemes;
    wxStaticText* m_staticText6;
    wxFontPickerCtrl* m_globalFontPicker;
    wxStaticText* m_staticText7;
    wxColourPickerCtrl* m_globalBgColourPicker;
    wxStaticText* m_staticText8;
    wxTextCtrl* m_fileSpec;
    wxStaticText* m_staticText91;
    wxColourPickerCtrl* m_colourPickerOutputPanesFgColour;
    wxStaticText* m_staticText911;
    wxColourPickerCtrl* m_colourPickerOutputPanesBgColour;
    wxPanel* m_panel6;
    wxListBox* m_properties;
    wxStaticText* m_staticText2;
    wxFontPickerCtrl* m_fontPicker;
    wxStaticText* m_staticText3;
    wxColourPickerCtrl* m_colourPicker;
    wxStaticText* m_staticText4;
    wxColourPickerCtrl* m_bgColourPicker;
    wxCheckBox* m_eolFilled;
    wxCheckBox* m_styleWithinPreProcessor;
    wxStaticLine* m_staticline1;
    wxStaticText* m_staticText1;
    wxButton* m_button5;
    wxButton* m_button6;
    wxButton* m_button7;
    wxButton* m_button8;
    wxButton* m_button9;
    wxPanel* m_panel8;
    wxStaticText* m_staticText9;
    wxColourPickerCtrl* m_colourPickerSelTextBgColour;
    wxButton* m_buttonDefaults;
    wxStdDialogButtonSizer* m_stdBtnSizer10;
    wxButton* m_buttonOk;
    wxButton* m_buttonCancel;
    wxButton* m_buttonApply;

protected:
    virtual void OnLexerSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnThemeChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFontChanged(wxFontPickerEvent& event) { event.Skip(); }
    virtual void OnColourChanged(wxColourPickerEvent& event) { event.Skip(); }
    virtual void OnText(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOutputViewColourChanged(wxColourPickerEvent& event) { event.Skip(); }
    virtual void OnItemSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEolFilled(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStyleWithinPreprocessor(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStyleWithingPreProcessorUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton0(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton1(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton2(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton3(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton4(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSelTextChanged(wxColourPickerEvent& event) { event.Skip(); }
    virtual void OnRestoreDefaults(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonApply(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonApplyUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    SyntaxHighlightBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Syntax Highlight and Fonts"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SyntaxHighlightBaseDlg();
};

#endif
