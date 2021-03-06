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

#include "sipAPIQtGui.h"

#line 535 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 249 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpen.sip"
#include <qpen.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 59 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 54 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 57 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 429 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 60 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 446 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 63 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 509 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 66 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 397 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 69 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 352 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 72 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 146 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 75 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 78 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 28 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 81 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 84 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextTableCellFormat.cpp"


PyDoc_STRVAR(doc_QTextTableCellFormat_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QTextTableCellFormat_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCellFormat, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_isValid, doc_QTextTableCellFormat_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCellFormat_setTopPadding, "setTopPadding(self, float)");

extern "C" {static PyObject *meth_QTextTableCellFormat_setTopPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_setTopPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextTableCellFormat, &sipCpp, &a0))
        {
            sipCpp->setTopPadding(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_setTopPadding, doc_QTextTableCellFormat_setTopPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCellFormat_topPadding, "topPadding(self) -> float");

extern "C" {static PyObject *meth_QTextTableCellFormat_topPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_topPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCellFormat, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->topPadding();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_topPadding, doc_QTextTableCellFormat_topPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCellFormat_setBottomPadding, "setBottomPadding(self, float)");

extern "C" {static PyObject *meth_QTextTableCellFormat_setBottomPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_setBottomPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextTableCellFormat, &sipCpp, &a0))
        {
            sipCpp->setBottomPadding(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_setBottomPadding, doc_QTextTableCellFormat_setBottomPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCellFormat_bottomPadding, "bottomPadding(self) -> float");

extern "C" {static PyObject *meth_QTextTableCellFormat_bottomPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_bottomPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCellFormat, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->bottomPadding();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_bottomPadding, doc_QTextTableCellFormat_bottomPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCellFormat_setLeftPadding, "setLeftPadding(self, float)");

extern "C" {static PyObject *meth_QTextTableCellFormat_setLeftPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_setLeftPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextTableCellFormat, &sipCpp, &a0))
        {
            sipCpp->setLeftPadding(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_setLeftPadding, doc_QTextTableCellFormat_setLeftPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCellFormat_leftPadding, "leftPadding(self) -> float");

extern "C" {static PyObject *meth_QTextTableCellFormat_leftPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_leftPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCellFormat, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->leftPadding();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_leftPadding, doc_QTextTableCellFormat_leftPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCellFormat_setRightPadding, "setRightPadding(self, float)");

extern "C" {static PyObject *meth_QTextTableCellFormat_setRightPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_setRightPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextTableCellFormat, &sipCpp, &a0))
        {
            sipCpp->setRightPadding(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_setRightPadding, doc_QTextTableCellFormat_setRightPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCellFormat_rightPadding, "rightPadding(self) -> float");

extern "C" {static PyObject *meth_QTextTableCellFormat_rightPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_rightPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCellFormat, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->rightPadding();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_rightPadding, doc_QTextTableCellFormat_rightPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCellFormat_setPadding, "setPadding(self, float)");

extern "C" {static PyObject *meth_QTextTableCellFormat_setPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCellFormat_setPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QTextTableCellFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextTableCellFormat, &sipCpp, &a0))
        {
            sipCpp->setPadding(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCellFormat, sipName_setPadding, doc_QTextTableCellFormat_setPadding);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QTextTableCellFormat(void *, const sipTypeDef *);}
static void *cast_QTextTableCellFormat(void *sipCppV, const sipTypeDef *targetType)
{
     ::QTextTableCellFormat *sipCpp = reinterpret_cast< ::QTextTableCellFormat *>(sipCppV);

    if (targetType == sipType_QTextCharFormat)
        return static_cast< ::QTextCharFormat *>(sipCpp);

    if (targetType == sipType_QTextFormat)
        return static_cast< ::QTextFormat *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextTableCellFormat(void *, int);}
static void release_QTextTableCellFormat(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTextTableCellFormat *>(sipCppV);
}


extern "C" {static void assign_QTextTableCellFormat(void *, SIP_SSIZE_T, void *);}
static void assign_QTextTableCellFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTextTableCellFormat *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTextTableCellFormat *>(sipSrc);
}


extern "C" {static void *array_QTextTableCellFormat(SIP_SSIZE_T);}
static void *array_QTextTableCellFormat(SIP_SSIZE_T sipNrElem)
{
    return new  ::QTextTableCellFormat[sipNrElem];
}


extern "C" {static void *copy_QTextTableCellFormat(const void *, SIP_SSIZE_T);}
static void *copy_QTextTableCellFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QTextTableCellFormat(reinterpret_cast<const  ::QTextTableCellFormat *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextTableCellFormat(sipSimpleWrapper *);}
static void dealloc_QTextTableCellFormat(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextTableCellFormat(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextTableCellFormat(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextTableCellFormat(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextTableCellFormat *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QTextTableCellFormat();

            return sipCpp;
        }
    }

    {
        const  ::QTextTableCellFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextTableCellFormat, &a0))
        {
            sipCpp = new  ::QTextTableCellFormat(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTextTableCellFormat[] = {{281, 255, 1}};


static PyMethodDef methods_QTextTableCellFormat[] = {
    {SIP_MLNAME_CAST(sipName_bottomPadding), meth_QTextTableCellFormat_bottomPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_bottomPadding)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextTableCellFormat_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_isValid)},
    {SIP_MLNAME_CAST(sipName_leftPadding), meth_QTextTableCellFormat_leftPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_leftPadding)},
    {SIP_MLNAME_CAST(sipName_rightPadding), meth_QTextTableCellFormat_rightPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_rightPadding)},
    {SIP_MLNAME_CAST(sipName_setBottomPadding), meth_QTextTableCellFormat_setBottomPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_setBottomPadding)},
    {SIP_MLNAME_CAST(sipName_setLeftPadding), meth_QTextTableCellFormat_setLeftPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_setLeftPadding)},
    {SIP_MLNAME_CAST(sipName_setPadding), meth_QTextTableCellFormat_setPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_setPadding)},
    {SIP_MLNAME_CAST(sipName_setRightPadding), meth_QTextTableCellFormat_setRightPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_setRightPadding)},
    {SIP_MLNAME_CAST(sipName_setTopPadding), meth_QTextTableCellFormat_setTopPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_setTopPadding)},
    {SIP_MLNAME_CAST(sipName_topPadding), meth_QTextTableCellFormat_topPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCellFormat_topPadding)}
};

PyDoc_STRVAR(doc_QTextTableCellFormat, "\1QTextTableCellFormat()\n"
"QTextTableCellFormat(QTextTableCellFormat)");


static pyqt5ClassPluginDef plugin_QTextTableCellFormat = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QTextTableCellFormat = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTextTableCellFormat,
        {0},
        &plugin_QTextTableCellFormat
    },
    {
        sipNameNr_QTextTableCellFormat,
        {0, 0, 1},
        10, methods_QTextTableCellFormat,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextTableCellFormat,
    -1,
    -1,
    supers_QTextTableCellFormat,
    0,
    init_type_QTextTableCellFormat,
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
    dealloc_QTextTableCellFormat,
    assign_QTextTableCellFormat,
    array_QTextTableCellFormat,
    copy_QTextTableCellFormat,
    release_QTextTableCellFormat,
    cast_QTextTableCellFormat,
    0,
    0,
    0,
    0,
    0,
    0
};
