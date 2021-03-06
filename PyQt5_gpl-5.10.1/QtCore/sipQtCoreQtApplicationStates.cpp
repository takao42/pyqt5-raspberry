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

#include "sipAPIQtCore.h"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQtApplicationStates.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQtApplicationStates.cpp"


extern "C" {static long slot_Qt_ApplicationStates___hash__(PyObject *);}
static long slot_Qt_ApplicationStates___hash__(PyObject *sipSelf)
{
     ::Qt::ApplicationStates *sipCpp = reinterpret_cast< ::Qt::ApplicationStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ApplicationStates));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator Qt::ApplicationStates::Int();
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQtApplicationStates.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_Qt_ApplicationStates___bool__(PyObject *);}
static int slot_Qt_ApplicationStates___bool__(PyObject *sipSelf)
{
     ::Qt::ApplicationStates *sipCpp = reinterpret_cast< ::Qt::ApplicationStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ApplicationStates));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ApplicationStates::Int() != 0);
#line 76 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQtApplicationStates.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ApplicationStates___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ApplicationStates___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::ApplicationStates *sipCpp = reinterpret_cast< ::Qt::ApplicationStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ApplicationStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::ApplicationStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ApplicationStates, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ApplicationStates::Int() != a0->operator Qt::ApplicationStates::Int());
#line 106 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQtApplicationStates.cpp"
            sipReleaseType(const_cast< ::Qt::ApplicationStates *>(a0),sipType_Qt_ApplicationStates,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_ApplicationStates, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_ApplicationStates___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ApplicationStates___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::ApplicationStates *sipCpp = reinterpret_cast< ::Qt::ApplicationStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ApplicationStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::ApplicationStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ApplicationStates, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ApplicationStates::Int() == a0->operator Qt::ApplicationStates::Int());
#line 142 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQtApplicationStates.cpp"
            sipReleaseType(const_cast< ::Qt::ApplicationStates *>(a0),sipType_Qt_ApplicationStates,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_ApplicationStates, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_ApplicationStates___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ApplicationStates___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ApplicationStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::ApplicationStates *sipCpp = reinterpret_cast< ::Qt::ApplicationStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ApplicationStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ApplicationStates(*sipCpp ^ a0);
#line 181 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQtApplicationStates.cpp"

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


extern "C" {static PyObject *slot_Qt_ApplicationStates___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ApplicationStates___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::ApplicationStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ApplicationStates, &a0, &a0State, &a1))
        {
             ::Qt::ApplicationStates*sipRes;

            sipRes = new  ::Qt::ApplicationStates((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_ApplicationStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ApplicationStates,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_ApplicationStates___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ApplicationStates___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ApplicationStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::ApplicationStates *sipCpp = reinterpret_cast< ::Qt::ApplicationStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ApplicationStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ApplicationStates(*sipCpp | a0);
#line 253 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQtApplicationStates.cpp"

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


extern "C" {static PyObject *slot_Qt_ApplicationStates___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ApplicationStates___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::ApplicationStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ApplicationStates, &a0, &a0State, &a1))
        {
             ::Qt::ApplicationStates*sipRes;

            sipRes = new  ::Qt::ApplicationStates((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_ApplicationStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ApplicationStates,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_ApplicationStates___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ApplicationStates___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ApplicationStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::ApplicationStates *sipCpp = reinterpret_cast< ::Qt::ApplicationStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ApplicationStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::Qt::ApplicationStates::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_ApplicationStates___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ApplicationStates___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::ApplicationStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ApplicationStates, &a0, &a0State, &a1))
        {
             ::Qt::ApplicationStates*sipRes;

            sipRes = new  ::Qt::ApplicationStates((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_ApplicationStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ApplicationStates,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_ApplicationStates___invert__(PyObject *);}
static PyObject *slot_Qt_ApplicationStates___invert__(PyObject *sipSelf)
{
     ::Qt::ApplicationStates *sipCpp = reinterpret_cast< ::Qt::ApplicationStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ApplicationStates));

    if (!sipCpp)
        return 0;


    {
        {
             ::Qt::ApplicationStates*sipRes;

            sipRes = new  ::Qt::ApplicationStates(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_ApplicationStates,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ApplicationStates___int__(PyObject *);}
static PyObject *slot_Qt_ApplicationStates___int__(PyObject *sipSelf)
{
     ::Qt::ApplicationStates *sipCpp = reinterpret_cast< ::Qt::ApplicationStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ApplicationStates));

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
extern "C" {static void release_Qt_ApplicationStates(void *, int);}
static void release_Qt_ApplicationStates(void *sipCppV, int)
{
    delete reinterpret_cast< ::Qt::ApplicationStates *>(sipCppV);
}


extern "C" {static void assign_Qt_ApplicationStates(void *, SIP_SSIZE_T, void *);}
static void assign_Qt_ApplicationStates(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::ApplicationStates *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::ApplicationStates *>(sipSrc);
}


extern "C" {static void *array_Qt_ApplicationStates(SIP_SSIZE_T);}
static void *array_Qt_ApplicationStates(SIP_SSIZE_T sipNrElem)
{
    return new  ::Qt::ApplicationStates[sipNrElem];
}


extern "C" {static void *copy_Qt_ApplicationStates(const void *, SIP_SSIZE_T);}
static void *copy_Qt_ApplicationStates(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::ApplicationStates(reinterpret_cast<const  ::Qt::ApplicationStates *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_ApplicationStates(sipSimpleWrapper *);}
static void dealloc_Qt_ApplicationStates(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_ApplicationStates(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_ApplicationStates(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_ApplicationStates(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::ApplicationStates *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::Qt::ApplicationStates();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::Qt::ApplicationStates(a0);

            return sipCpp;
        }
    }

    {
        const  ::Qt::ApplicationStates* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_ApplicationStates, &a0, &a0State))
        {
            sipCpp = new  ::Qt::ApplicationStates(*a0);
            sipReleaseType(const_cast< ::Qt::ApplicationStates *>(a0),sipType_Qt_ApplicationStates,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_ApplicationStates(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_ApplicationStates(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::ApplicationStates **sipCppPtr = reinterpret_cast< ::Qt::ApplicationStates **>(sipCppPtrV);

#line 121 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::ApplicationStates is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ApplicationState)) ||
            sipCanConvertToType(sipPy, sipType_Qt_ApplicationStates, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ApplicationState)))
{
    *sipCppPtr = new Qt::ApplicationStates(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::ApplicationStates *>(sipConvertToType(sipPy, sipType_Qt_ApplicationStates, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQtApplicationStates.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_ApplicationStates[] = {
    {(void *)slot_Qt_ApplicationStates___hash__, hash_slot},
    {(void *)slot_Qt_ApplicationStates___bool__, bool_slot},
    {(void *)slot_Qt_ApplicationStates___ne__, ne_slot},
    {(void *)slot_Qt_ApplicationStates___eq__, eq_slot},
    {(void *)slot_Qt_ApplicationStates___ixor__, ixor_slot},
    {(void *)slot_Qt_ApplicationStates___xor__, xor_slot},
    {(void *)slot_Qt_ApplicationStates___ior__, ior_slot},
    {(void *)slot_Qt_ApplicationStates___or__, or_slot},
    {(void *)slot_Qt_ApplicationStates___iand__, iand_slot},
    {(void *)slot_Qt_ApplicationStates___and__, and_slot},
    {(void *)slot_Qt_ApplicationStates___invert__, invert_slot},
    {(void *)slot_Qt_ApplicationStates___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_ApplicationStates, "\1Qt.ApplicationStates()\n"
"Qt.ApplicationStates(Union[Qt.ApplicationStates, Qt.ApplicationState])\n"
"Qt.ApplicationStates(Qt.ApplicationStates)");


static pyqt5ClassPluginDef plugin_Qt_ApplicationStates = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_Qt_ApplicationStates = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_Qt__ApplicationStates,
        {0},
        &plugin_Qt_ApplicationStates
    },
    {
        sipNameNr_ApplicationStates,
        {314, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_ApplicationStates,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_ApplicationStates,
    init_type_Qt_ApplicationStates,
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
    dealloc_Qt_ApplicationStates,
    assign_Qt_ApplicationStates,
    array_Qt_ApplicationStates,
    copy_Qt_ApplicationStates,
    release_Qt_ApplicationStates,
    0,
    convertTo_Qt_ApplicationStates,
    0,
    0,
    0,
    0,
    0
};
