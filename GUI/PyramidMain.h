/***************************************************************
 * Name:      PyramidMain.h
 * Purpose:   Defines Application Frame
 * Author:    Marc Burns (m4burns@uwaterloo.ca)
 * Created:   2011-03-07
 * Copyright: Marc Burns (convextech.ca)
 * License:
 **************************************************************/

#ifndef PYRAMIDMAIN_H
#define PYRAMIDMAIN_H

#include <vector>
#include <string>

//(*Headers(PyramidFrame)
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/filedlg.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/timer.h>
#include <wx/statbmp.h>
//*)

class Pyramid;
class MapperInterface;

class PyramidFrame: public wxFrame
{
    public:

        PyramidFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~PyramidFrame();

    private:

        //(*Handlers(PyramidFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnCheckPorts(wxTimerEvent& event);
        void OnReload(wxCommandEvent& event);
        void OnLoadScript(wxCommandEvent& event);
        void OnReadLog(wxTimerEvent& event);
        //*)

        //(*Identifiers(PyramidFrame)
        static const long ID_STATICBITMAP1;
        static const long ID_BUTTON3;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT1;
        static const long ID_STATICBITMAP2;
        static const long ID_STATICTEXT11;
        static const long ID_STATICBITMAP3;
        static const long ID_STATICTEXT3;
        static const long ID_STATICBITMAP4;
        static const long ID_STATICTEXT4;
        static const long ID_STATICBITMAP5;
        static const long ID_STATICTEXT5;
        static const long ID_STATICBITMAP6;
        static const long ID_STATICTEXT6;
        static const long ID_STATICBITMAP7;
        static const long ID_STATICTEXT7;
        static const long ID_STATICBITMAP8;
        static const long ID_STATICTEXT8;
        static const long ID_STATICBITMAP9;
        static const long ID_STATICTEXT9;
        static const long ID_STATICBITMAP10;
        static const long ID_STATICTEXT10;
        static const long ID_STATICBITMAP11;
        static const long ID_TEXTCTRL1;
        static const long ID_PANEL1;
        static const long ID_TIMER1;
        static const long ID_TIMER2;
        //*)

        //(*Declarations(PyramidFrame)
        wxStaticBitmap* InStat5;
        wxPanel* Panel1;
        wxStaticBitmap* OutStat4;
        wxStaticText* OutName3;
        wxStaticText* OutName1;
        wxStaticText* OutName5;
        wxButton* Button4;
        wxStaticBitmap* InStat2;
        wxStaticText* InName2;
        wxButton* Button1;
        wxStaticBitmap* OutStat5;
        wxStaticText* OutName2;
        wxStaticBitmap* InStat4;
        wxStaticText* OutName4;
        wxButton* Button2;
        wxButton* Button3;
        wxTimer Timer1;
        wxStaticText* InName1;
        wxStaticBitmap* OutStat2;
        wxStaticBitmap* InStat1;
        wxTimer Timer2;
        wxStaticBitmap* OutStat3;
        wxStaticText* InName5;
        wxFileDialog* FileDialog1;
        wxStaticBitmap* InStat3;
        wxStaticBitmap* StaticBitmap1;
        wxTextCtrl* logPyramid;
        wxStaticText* InName4;
        wxStaticText* InName3;
        wxStaticBitmap* OutStat1;
        //*)

        DECLARE_EVENT_TABLE()

        int llRead, llSize;

        wxBitmap* port_act;
        wxBitmap* port_inact;

        Pyramid* _pyramid;
        MapperInterface* _pyramid_i;

        bool inPortStatus[5], outPortStatus[5];
        std::vector<std::pair<wxStaticText*, wxStaticBitmap*> > ioFields;
        std::string script_path;

        void UpdateNames();
};

#endif // PYRAMIDMAIN_H
