/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtWidgets.h"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qwhatsthis.sip"
#include <qwhatsthis.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWhatsThis.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qaction.sip"
#include <qaction.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWhatsThis.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWhatsThis.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWhatsThis.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWhatsThis.cpp"
#line 28 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWhatsThis.cpp"


PyDoc_STRVAR(doc_QWhatsThis_enterWhatsThisMode, "enterWhatsThisMode()");

extern "C" {static PyObject *meth_QWhatsThis_enterWhatsThisMode(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_enterWhatsThisMode(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QWhatsThis::enterWhatsThisMode();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_enterWhatsThisMode, doc_QWhatsThis_enterWhatsThisMode);

    return NULL;
}


PyDoc_STRVAR(doc_QWhatsThis_inWhatsThisMode, "inWhatsThisMode() -> bool");

extern "C" {static PyObject *meth_QWhatsThis_inWhatsThisMode(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_inWhatsThisMode(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes =  ::QWhatsThis::inWhatsThisMode();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_inWhatsThisMode, doc_QWhatsThis_inWhatsThisMode);

    return NULL;
}


PyDoc_STRVAR(doc_QWhatsThis_leaveWhatsThisMode, "leaveWhatsThisMode()");

extern "C" {static PyObject *meth_QWhatsThis_leaveWhatsThisMode(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_leaveWhatsThisMode(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QWhatsThis::leaveWhatsThisMode();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_leaveWhatsThisMode, doc_QWhatsThis_leaveWhatsThisMode);

    return NULL;
}


PyDoc_STRVAR(doc_QWhatsThis_showText, "showText(QPoint, str, widget: QWidget = None)");

extern "C" {static PyObject *meth_QWhatsThis_showText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_showText(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QWidget* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_widget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9J1|J8", sipType_QPoint, &a0, sipType_QString,&a1, &a1State, sipType_QWidget, &a2))
        {
             ::QWhatsThis::showText(*a0,*a1,a2);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_showText, doc_QWhatsThis_showText);

    return NULL;
}


PyDoc_STRVAR(doc_QWhatsThis_hideText, "hideText()");

extern "C" {static PyObject *meth_QWhatsThis_hideText(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_hideText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QWhatsThis::hideText();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_hideText, doc_QWhatsThis_hideText);

    return NULL;
}


PyDoc_STRVAR(doc_QWhatsThis_createAction, "createAction(parent: QObject = None) -> QAction");

extern "C" {static PyObject *meth_QWhatsThis_createAction(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_createAction(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::QObject* a0 = 0;
        sipWrapper *sipOwner = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|JH", sipType_QObject, &a0, &sipOwner))
        {
             ::QAction*sipRes;

            sipRes =  ::QWhatsThis::createAction(a0);

            return sipConvertFromNewType(sipRes,sipType_QAction,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_createAction, doc_QWhatsThis_createAction);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWhatsThis(void *, int);}
static void release_QWhatsThis(void *sipCppV, int)
{
    delete reinterpret_cast< ::QWhatsThis *>(sipCppV);
}


extern "C" {static void dealloc_QWhatsThis(sipSimpleWrapper *);}
static void dealloc_QWhatsThis(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWhatsThis(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWhatsThis(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWhatsThis(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWhatsThis *sipCpp = 0;

    {
        const  ::QWhatsThis* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWhatsThis, &a0))
        {
            sipCpp = new  ::QWhatsThis(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWhatsThis[] = {
    {SIP_MLNAME_CAST(sipName_createAction), (PyCFunction)meth_QWhatsThis_createAction, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QWhatsThis_createAction)},
    {SIP_MLNAME_CAST(sipName_enterWhatsThisMode), meth_QWhatsThis_enterWhatsThisMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QWhatsThis_enterWhatsThisMode)},
    {SIP_MLNAME_CAST(sipName_hideText), meth_QWhatsThis_hideText, METH_VARARGS, SIP_MLDOC_CAST(doc_QWhatsThis_hideText)},
    {SIP_MLNAME_CAST(sipName_inWhatsThisMode), meth_QWhatsThis_inWhatsThisMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QWhatsThis_inWhatsThisMode)},
    {SIP_MLNAME_CAST(sipName_leaveWhatsThisMode), meth_QWhatsThis_leaveWhatsThisMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QWhatsThis_leaveWhatsThisMode)},
    {SIP_MLNAME_CAST(sipName_showText), (PyCFunction)meth_QWhatsThis_showText, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QWhatsThis_showText)}
};

PyDoc_STRVAR(doc_QWhatsThis, "\1QWhatsThis(QWhatsThis)");


static pyqt5ClassPluginDef plugin_QWhatsThis = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QWhatsThis = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QWhatsThis,
        {0},
        &plugin_QWhatsThis
    },
    {
        sipNameNr_QWhatsThis,
        {0, 0, 1},
        6, methods_QWhatsThis,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWhatsThis,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWhatsThis,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QWhatsThis,
    0,
    0,
    0,
    release_QWhatsThis,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
