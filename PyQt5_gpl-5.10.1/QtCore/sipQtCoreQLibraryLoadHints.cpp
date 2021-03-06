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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQLibraryLoadHints.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQLibraryLoadHints.cpp"


extern "C" {static long slot_QLibrary_LoadHints___hash__(PyObject *);}
static long slot_QLibrary_LoadHints___hash__(PyObject *sipSelf)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QLibrary::LoadHints::Int();
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQLibraryLoadHints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QLibrary_LoadHints___bool__(PyObject *);}
static int slot_QLibrary_LoadHints___bool__(PyObject *sipSelf)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLibrary::LoadHints::Int() != 0);
#line 76 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQLibraryLoadHints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QLibrary::LoadHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLibrary::LoadHints::Int() != a0->operator QLibrary::LoadHints::Int());
#line 106 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQLibraryLoadHints.cpp"
            sipReleaseType(const_cast< ::QLibrary::LoadHints *>(a0),sipType_QLibrary_LoadHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QLibrary_LoadHints, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QLibrary::LoadHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLibrary::LoadHints::Int() == a0->operator QLibrary::LoadHints::Int());
#line 142 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQLibraryLoadHints.cpp"
            sipReleaseType(const_cast< ::QLibrary::LoadHints *>(a0),sipType_QLibrary_LoadHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QLibrary_LoadHints, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        *sipCpp = QLibrary::LoadHints(*sipCpp ^ a0);
#line 181 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQLibraryLoadHints.cpp"

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


extern "C" {static PyObject *slot_QLibrary_LoadHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLibrary::LoadHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLibrary_LoadHints, &a0, &a0State, &a1))
        {
             ::QLibrary::LoadHints*sipRes;

            sipRes = new  ::QLibrary::LoadHints((*a0 ^ a1));
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        *sipCpp = QLibrary::LoadHints(*sipCpp | a0);
#line 253 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQLibraryLoadHints.cpp"

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


extern "C" {static PyObject *slot_QLibrary_LoadHints___or__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLibrary::LoadHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLibrary_LoadHints, &a0, &a0State, &a1))
        {
             ::QLibrary::LoadHints*sipRes;

            sipRes = new  ::QLibrary::LoadHints((*a0 | a1));
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QLibrary::LoadHints::operator&=(a0);

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


extern "C" {static PyObject *slot_QLibrary_LoadHints___and__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLibrary::LoadHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLibrary_LoadHints, &a0, &a0State, &a1))
        {
             ::QLibrary::LoadHints*sipRes;

            sipRes = new  ::QLibrary::LoadHints((*a0 & a1));
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___invert__(PyObject *);}
static PyObject *slot_QLibrary_LoadHints___invert__(PyObject *sipSelf)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;


    {
        {
             ::QLibrary::LoadHints*sipRes;

            sipRes = new  ::QLibrary::LoadHints(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___int__(PyObject *);}
static PyObject *slot_QLibrary_LoadHints___int__(PyObject *sipSelf)
{
     ::QLibrary::LoadHints *sipCpp = reinterpret_cast< ::QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

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
extern "C" {static void release_QLibrary_LoadHints(void *, int);}
static void release_QLibrary_LoadHints(void *sipCppV, int)
{
    delete reinterpret_cast< ::QLibrary::LoadHints *>(sipCppV);
}


extern "C" {static void assign_QLibrary_LoadHints(void *, SIP_SSIZE_T, void *);}
static void assign_QLibrary_LoadHints(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QLibrary::LoadHints *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QLibrary::LoadHints *>(sipSrc);
}


extern "C" {static void *array_QLibrary_LoadHints(SIP_SSIZE_T);}
static void *array_QLibrary_LoadHints(SIP_SSIZE_T sipNrElem)
{
    return new  ::QLibrary::LoadHints[sipNrElem];
}


extern "C" {static void *copy_QLibrary_LoadHints(const void *, SIP_SSIZE_T);}
static void *copy_QLibrary_LoadHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QLibrary::LoadHints(reinterpret_cast<const  ::QLibrary::LoadHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLibrary_LoadHints(sipSimpleWrapper *);}
static void dealloc_QLibrary_LoadHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QLibrary_LoadHints(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QLibrary_LoadHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLibrary_LoadHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QLibrary::LoadHints *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QLibrary::LoadHints();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QLibrary::LoadHints(a0);

            return sipCpp;
        }
    }

    {
        const  ::QLibrary::LoadHints* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            sipCpp = new  ::QLibrary::LoadHints(*a0);
            sipReleaseType(const_cast< ::QLibrary::LoadHints *>(a0),sipType_QLibrary_LoadHints,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QLibrary_LoadHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_QLibrary_LoadHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QLibrary::LoadHints **sipCppPtr = reinterpret_cast< ::QLibrary::LoadHints **>(sipCppPtrV);

#line 121 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QLibrary::LoadHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHint)) ||
            sipCanConvertToType(sipPy, sipType_QLibrary_LoadHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHint)))
{
    *sipCppPtr = new QLibrary::LoadHints(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QLibrary::LoadHints *>(sipConvertToType(sipPy, sipType_QLibrary_LoadHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQLibraryLoadHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLibrary_LoadHints[] = {
    {(void *)slot_QLibrary_LoadHints___hash__, hash_slot},
    {(void *)slot_QLibrary_LoadHints___bool__, bool_slot},
    {(void *)slot_QLibrary_LoadHints___ne__, ne_slot},
    {(void *)slot_QLibrary_LoadHints___eq__, eq_slot},
    {(void *)slot_QLibrary_LoadHints___ixor__, ixor_slot},
    {(void *)slot_QLibrary_LoadHints___xor__, xor_slot},
    {(void *)slot_QLibrary_LoadHints___ior__, ior_slot},
    {(void *)slot_QLibrary_LoadHints___or__, or_slot},
    {(void *)slot_QLibrary_LoadHints___iand__, iand_slot},
    {(void *)slot_QLibrary_LoadHints___and__, and_slot},
    {(void *)slot_QLibrary_LoadHints___invert__, invert_slot},
    {(void *)slot_QLibrary_LoadHints___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QLibrary_LoadHints, "\1QLibrary.LoadHints()\n"
"QLibrary.LoadHints(Union[QLibrary.LoadHints, QLibrary.LoadHint])\n"
"QLibrary.LoadHints(QLibrary.LoadHints)");


static pyqt5ClassPluginDef plugin_QLibrary_LoadHints = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QLibrary_LoadHints = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QLibrary__LoadHints,
        {0},
        &plugin_QLibrary_LoadHints
    },
    {
        sipNameNr_LoadHints,
        {98, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLibrary_LoadHints,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QLibrary_LoadHints,
    init_type_QLibrary_LoadHints,
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
    dealloc_QLibrary_LoadHints,
    assign_QLibrary_LoadHints,
    array_QLibrary_LoadHints,
    copy_QLibrary_LoadHints,
    release_QLibrary_LoadHints,
    0,
    convertTo_QLibrary_LoadHints,
    0,
    0,
    0,
    0,
    0
};
