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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qfiledevice.sip"
#include <qfiledevice.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qfiledevice.sip"
#include <qfiledevice.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"


extern "C" {static long slot_QFileDevice_FileHandleFlags___hash__(PyObject *);}
static long slot_QFileDevice_FileHandleFlags___hash__(PyObject *sipSelf)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QFileDevice::FileHandleFlags::Int();
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QFileDevice_FileHandleFlags___bool__(PyObject *);}
static int slot_QFileDevice_FileHandleFlags___bool__(PyObject *sipSelf)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFileDevice::FileHandleFlags::Int() != 0);
#line 76 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDevice_FileHandleFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFileDevice::FileHandleFlags::Int() != a0->operator QFileDevice::FileHandleFlags::Int());
#line 106 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"
            sipReleaseType(const_cast< ::QFileDevice::FileHandleFlags *>(a0),sipType_QFileDevice_FileHandleFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QFileDevice_FileHandleFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDevice_FileHandleFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFileDevice::FileHandleFlags::Int() == a0->operator QFileDevice::FileHandleFlags::Int());
#line 142 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"
            sipReleaseType(const_cast< ::QFileDevice::FileHandleFlags *>(a0),sipType_QFileDevice_FileHandleFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QFileDevice_FileHandleFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        *sipCpp = QFileDevice::FileHandleFlags(*sipCpp ^ a0);
#line 181 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"

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


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDevice_FileHandleFlags, &a0, &a0State, &a1))
        {
             ::QFileDevice::FileHandleFlags*sipRes;

            sipRes = new  ::QFileDevice::FileHandleFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QFileDevice_FileHandleFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_FileHandleFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
        *sipCpp = QFileDevice::FileHandleFlags(*sipCpp | a0);
#line 253 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"

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


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDevice_FileHandleFlags, &a0, &a0State, &a1))
        {
             ::QFileDevice::FileHandleFlags*sipRes;

            sipRes = new  ::QFileDevice::FileHandleFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QFileDevice_FileHandleFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_FileHandleFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QFileDevice::FileHandleFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDevice_FileHandleFlags, &a0, &a0State, &a1))
        {
             ::QFileDevice::FileHandleFlags*sipRes;

            sipRes = new  ::QFileDevice::FileHandleFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QFileDevice_FileHandleFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_FileHandleFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___invert__(PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___invert__(PyObject *sipSelf)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QFileDevice::FileHandleFlags*sipRes;

            sipRes = new  ::QFileDevice::FileHandleFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_FileHandleFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFileDevice_FileHandleFlags___int__(PyObject *);}
static PyObject *slot_QFileDevice_FileHandleFlags___int__(PyObject *sipSelf)
{
     ::QFileDevice::FileHandleFlags *sipCpp = reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDevice_FileHandleFlags));

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
extern "C" {static void release_QFileDevice_FileHandleFlags(void *, int);}
static void release_QFileDevice_FileHandleFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipCppV);
}


extern "C" {static void assign_QFileDevice_FileHandleFlags(void *, SIP_SSIZE_T, void *);}
static void assign_QFileDevice_FileHandleFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QFileDevice::FileHandleFlags *>(sipSrc);
}


extern "C" {static void *array_QFileDevice_FileHandleFlags(SIP_SSIZE_T);}
static void *array_QFileDevice_FileHandleFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QFileDevice::FileHandleFlags[sipNrElem];
}


extern "C" {static void *copy_QFileDevice_FileHandleFlags(const void *, SIP_SSIZE_T);}
static void *copy_QFileDevice_FileHandleFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QFileDevice::FileHandleFlags(reinterpret_cast<const  ::QFileDevice::FileHandleFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFileDevice_FileHandleFlags(sipSimpleWrapper *);}
static void dealloc_QFileDevice_FileHandleFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFileDevice_FileHandleFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QFileDevice_FileHandleFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFileDevice_FileHandleFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QFileDevice::FileHandleFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QFileDevice::FileHandleFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QFileDevice::FileHandleFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QFileDevice::FileHandleFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QFileDevice_FileHandleFlags, &a0, &a0State))
        {
            sipCpp = new  ::QFileDevice::FileHandleFlags(*a0);
            sipReleaseType(const_cast< ::QFileDevice::FileHandleFlags *>(a0),sipType_QFileDevice_FileHandleFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QFileDevice_FileHandleFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QFileDevice_FileHandleFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QFileDevice::FileHandleFlags **sipCppPtr = reinterpret_cast< ::QFileDevice::FileHandleFlags **>(sipCppPtrV);

#line 121 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QFileDevice::FileHandleFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlag)) ||
            sipCanConvertToType(sipPy, sipType_QFileDevice_FileHandleFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDevice_FileHandleFlag)))
{
    *sipCppPtr = new QFileDevice::FileHandleFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QFileDevice::FileHandleFlags *>(sipConvertToType(sipPy, sipType_QFileDevice_FileHandleFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQFileDeviceFileHandleFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFileDevice_FileHandleFlags[] = {
    {(void *)slot_QFileDevice_FileHandleFlags___hash__, hash_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___bool__, bool_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___ne__, ne_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___eq__, eq_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___ixor__, ixor_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___xor__, xor_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___ior__, ior_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___or__, or_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___iand__, iand_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___and__, and_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___invert__, invert_slot},
    {(void *)slot_QFileDevice_FileHandleFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QFileDevice_FileHandleFlags, "\1QFileDevice.FileHandleFlags()\n"
"QFileDevice.FileHandleFlags(Union[QFileDevice.FileHandleFlags, QFileDevice.FileHandleFlag])\n"
"QFileDevice.FileHandleFlags(QFileDevice.FileHandleFlags)");


static pyqt5ClassPluginDef plugin_QFileDevice_FileHandleFlags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QFileDevice_FileHandleFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QFileDevice__FileHandleFlags,
        {0},
        &plugin_QFileDevice_FileHandleFlags
    },
    {
        sipNameNr_FileHandleFlags,
        {63, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFileDevice_FileHandleFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QFileDevice_FileHandleFlags,
    init_type_QFileDevice_FileHandleFlags,
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
    dealloc_QFileDevice_FileHandleFlags,
    assign_QFileDevice_FileHandleFlags,
    array_QFileDevice_FileHandleFlags,
    copy_QFileDevice_FileHandleFlags,
    release_QFileDevice_FileHandleFlags,
    0,
    convertTo_QFileDevice_FileHandleFlags,
    0,
    0,
    0,
    0,
    0
};
