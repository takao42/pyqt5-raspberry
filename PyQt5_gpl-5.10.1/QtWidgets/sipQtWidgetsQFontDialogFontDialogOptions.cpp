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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qfontdialog.sip"
#include <qfontdialog.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQFontDialogFontDialogOptions.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qfontdialog.sip"
#include <qfontdialog.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQFontDialogFontDialogOptions.cpp"


extern "C" {static long slot_QFontDialog_FontDialogOptions___hash__(PyObject *);}
static long slot_QFontDialog_FontDialogOptions___hash__(PyObject *sipSelf)
{
     ::QFontDialog::FontDialogOptions *sipCpp = reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontDialog_FontDialogOptions));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QFontDialog::FontDialogOptions::Int();
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQFontDialogFontDialogOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QFontDialog_FontDialogOptions___bool__(PyObject *);}
static int slot_QFontDialog_FontDialogOptions___bool__(PyObject *sipSelf)
{
     ::QFontDialog::FontDialogOptions *sipCpp = reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontDialog_FontDialogOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFontDialog::FontDialogOptions::Int() != 0);
#line 76 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQFontDialogFontDialogOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QFontDialog::FontDialogOptions *sipCpp = reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontDialog_FontDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QFontDialog::FontDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFontDialog_FontDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFontDialog::FontDialogOptions::Int() != a0->operator QFontDialog::FontDialogOptions::Int());
#line 106 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQFontDialogFontDialogOptions.cpp"
            sipReleaseType(const_cast< ::QFontDialog::FontDialogOptions *>(a0),sipType_QFontDialog_FontDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QFontDialog_FontDialogOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QFontDialog::FontDialogOptions *sipCpp = reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontDialog_FontDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QFontDialog::FontDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFontDialog_FontDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFontDialog::FontDialogOptions::Int() == a0->operator QFontDialog::FontDialogOptions::Int());
#line 142 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQFontDialogFontDialogOptions.cpp"
            sipReleaseType(const_cast< ::QFontDialog::FontDialogOptions *>(a0),sipType_QFontDialog_FontDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QFontDialog_FontDialogOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFontDialog_FontDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFontDialog::FontDialogOptions *sipCpp = reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontDialog_FontDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QFontDialog::FontDialogOptions(*sipCpp ^ a0);
#line 181 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQFontDialogFontDialogOptions.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFontDialog::FontDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFontDialog_FontDialogOptions, &a0, &a0State, &a1))
        {
             ::QFontDialog::FontDialogOptions*sipRes;

            sipRes = new  ::QFontDialog::FontDialogOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QFontDialog_FontDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFontDialog_FontDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFontDialog_FontDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFontDialog::FontDialogOptions *sipCpp = reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontDialog_FontDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QFontDialog::FontDialogOptions(*sipCpp | a0);
#line 253 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQFontDialogFontDialogOptions.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFontDialog::FontDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFontDialog_FontDialogOptions, &a0, &a0State, &a1))
        {
             ::QFontDialog::FontDialogOptions*sipRes;

            sipRes = new  ::QFontDialog::FontDialogOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QFontDialog_FontDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFontDialog_FontDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFontDialog_FontDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFontDialog::FontDialogOptions *sipCpp = reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontDialog_FontDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QFontDialog::FontDialogOptions::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFontDialog::FontDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFontDialog_FontDialogOptions, &a0, &a0State, &a1))
        {
             ::QFontDialog::FontDialogOptions*sipRes;

            sipRes = new  ::QFontDialog::FontDialogOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QFontDialog_FontDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFontDialog_FontDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___invert__(PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___invert__(PyObject *sipSelf)
{
     ::QFontDialog::FontDialogOptions *sipCpp = reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontDialog_FontDialogOptions));

    if (!sipCpp)
        return 0;


    {
        {
             ::QFontDialog::FontDialogOptions*sipRes;

            sipRes = new  ::QFontDialog::FontDialogOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QFontDialog_FontDialogOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFontDialog_FontDialogOptions___int__(PyObject *);}
static PyObject *slot_QFontDialog_FontDialogOptions___int__(PyObject *sipSelf)
{
     ::QFontDialog::FontDialogOptions *sipCpp = reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontDialog_FontDialogOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFontDialog_FontDialogOptions(void *, int);}
static void release_QFontDialog_FontDialogOptions(void *sipCppV, int)
{
    delete reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipCppV);
}


extern "C" {static void assign_QFontDialog_FontDialogOptions(void *, SIP_SSIZE_T, void *);}
static void assign_QFontDialog_FontDialogOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QFontDialog::FontDialogOptions *>(sipSrc);
}


extern "C" {static void *array_QFontDialog_FontDialogOptions(SIP_SSIZE_T);}
static void *array_QFontDialog_FontDialogOptions(SIP_SSIZE_T sipNrElem)
{
    return new  ::QFontDialog::FontDialogOptions[sipNrElem];
}


extern "C" {static void *copy_QFontDialog_FontDialogOptions(const void *, SIP_SSIZE_T);}
static void *copy_QFontDialog_FontDialogOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QFontDialog::FontDialogOptions(reinterpret_cast<const  ::QFontDialog::FontDialogOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFontDialog_FontDialogOptions(sipSimpleWrapper *);}
static void dealloc_QFontDialog_FontDialogOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFontDialog_FontDialogOptions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QFontDialog_FontDialogOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFontDialog_FontDialogOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QFontDialog::FontDialogOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QFontDialog::FontDialogOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QFontDialog::FontDialogOptions(a0);

            return sipCpp;
        }
    }

    {
        const  ::QFontDialog::FontDialogOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QFontDialog_FontDialogOptions, &a0, &a0State))
        {
            sipCpp = new  ::QFontDialog::FontDialogOptions(*a0);
            sipReleaseType(const_cast< ::QFontDialog::FontDialogOptions *>(a0),sipType_QFontDialog_FontDialogOptions,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QFontDialog_FontDialogOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QFontDialog_FontDialogOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QFontDialog::FontDialogOptions **sipCppPtr = reinterpret_cast< ::QFontDialog::FontDialogOptions **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QFontDialog::FontDialogOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFontDialog_FontDialogOption)) ||
            sipCanConvertToType(sipPy, sipType_QFontDialog_FontDialogOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFontDialog_FontDialogOption)))
{
    *sipCppPtr = new QFontDialog::FontDialogOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QFontDialog::FontDialogOptions *>(sipConvertToType(sipPy, sipType_QFontDialog_FontDialogOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQFontDialogFontDialogOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFontDialog_FontDialogOptions[] = {
    {(void *)slot_QFontDialog_FontDialogOptions___hash__, hash_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___bool__, bool_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___ne__, ne_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___eq__, eq_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___ixor__, ixor_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___xor__, xor_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___ior__, ior_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___or__, or_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___iand__, iand_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___and__, and_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___invert__, invert_slot},
    {(void *)slot_QFontDialog_FontDialogOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QFontDialog_FontDialogOptions, "\1QFontDialog.FontDialogOptions()\n"
"QFontDialog.FontDialogOptions(Union[QFontDialog.FontDialogOptions, QFontDialog.FontDialogOption])\n"
"QFontDialog.FontDialogOptions(QFontDialog.FontDialogOptions)");


static pyqt5ClassPluginDef plugin_QFontDialog_FontDialogOptions = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QFontDialog_FontDialogOptions = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QFontDialog__FontDialogOptions,
        {0},
        &plugin_QFontDialog_FontDialogOptions
    },
    {
        sipNameNr_FontDialogOptions,
        {91, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFontDialog_FontDialogOptions,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QFontDialog_FontDialogOptions,
    init_type_QFontDialog_FontDialogOptions,
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
    dealloc_QFontDialog_FontDialogOptions,
    assign_QFontDialog_FontDialogOptions,
    array_QFontDialog_FontDialogOptions,
    copy_QFontDialog_FontDialogOptions,
    release_QFontDialog_FontDialogOptions,
    0,
    convertTo_QFontDialog_FontDialogOptions,
    0,
    0,
    0,
    0,
    0
};
