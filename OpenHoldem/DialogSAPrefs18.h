#ifndef INC_DIALOGSAPREFS18_H
#define INC_DIALOGSAPREFS1_H

#include "resource.h"

#include "SAPrefsDialog.h"

// CDlgSAPrefs18 dialog

class CDlgSAPrefs18 : public CSAPrefsSubDlg
{
	DECLARE_DYNAMIC(CDlgSAPrefs18)

public:
	CDlgSAPrefs18(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgSAPrefs18();

// Dialog Data
	enum { IDD = IDD_SAPREFS18 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();

protected:
	virtual void OnOK();
};


#endif //INC_DIALOGSAPREFS18_H