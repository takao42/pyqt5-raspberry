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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtouchdevice.sip"
#include <qtouchdevice.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTouchDeviceCapabilities.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtouchdevice.sip"
#include <qtouchdevice.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTouchDeviceCapabilities.cpp"


extern "C" {static long slot_QTouchDevice_Capabilities___hash__(PyObject *);}
static long slot_QTouchDevice_Capabilities___hash__(PyObject *sipSelf)
{
     ::QTouchDevice::Capabilities *sipCpp = reinterpret_cast< ::QTouchDevice::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchDevice_Capabilities));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QTouchDevice::Capabilities::Int();
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTouchDeviceCapabilities.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QTouchDevice_Capabilities___bool__(PyObject *);}
static int slot_QTouchDevice_Capabilities___bool__(PyObject *sipSelf)
{
     ::QTouchDevice::Capabilities *sipCpp = reinterpret_cast< ::QTouchDevice::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchDevice_Capabilities));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTouchDevice::Capabilities::Int() != 0);
#line 76 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTouchDeviceCapabilities.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTouchDevice::Capabilities *sipCpp = reinterpret_cast< ::QTouchDevice::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchDevice_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QTouchDevice::Capabilities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTouchDevice_Capabilities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTouchDevice::Capabilities::Int() != a0->operator QTouchDevice::Capabilities::Int());
#line 106 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTouchDeviceCapabilities.cpp"
            sipReleaseType(const_cast< ::QTouchDevice::Capabilities *>(a0),sipType_QTouchDevice_Capabilities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QTouchDevice_Capabilities, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTouchDevice::Capabilities *sipCpp = reinterpret_cast< ::QTouchDevice::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchDevice_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QTouchDevice::Capabilities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTouchDevice_Capabilities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTouchDevice::Capabilities::Int() == a0->operator QTouchDevice::Capabilities::Int());
#line 142 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTouchDeviceCapabilities.cpp"
            sipReleaseType(const_cast< ::QTouchDevice::Capabilities *>(a0),sipType_QTouchDevice_Capabilities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QTouchDevice_Capabilities, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTouchDevice_Capabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTouchDevice::Capabilities *sipCpp = reinterpret_cast< ::QTouchDevice::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchDevice_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QTouchDevice::Capabilities(*sipCpp ^ a0);
#line 181 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTouchDeviceCapabilities.cpp"

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


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTouchDevice::Capabilities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTouchDevice_Capabilities, &a0, &a0State, &a1))
        {
             ::QTouchDevice::Capabilities*sipRes;

            sipRes = new  ::QTouchDevice::Capabilities((*a0 ^ a1));
            sipReleaseType(a0,sipType_QTouchDevice_Capabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTouchDevice_Capabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTouchDevice_Capabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTouchDevice::Capabilities *sipCpp = reinterpret_cast< ::QTouchDevice::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchDevice_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QTouchDevice::Capabilities(*sipCpp | a0);
#line 253 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTouchDeviceCapabilities.cpp"

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


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___or__(PyObject *,PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTouchDevice::Capabilities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTouchDevice_Capabilities, &a0, &a0State, &a1))
        {
             ::QTouchDevice::Capabilities*sipRes;

            sipRes = new  ::QTouchDevice::Capabilities((*a0 | a1));
            sipReleaseType(a0,sipType_QTouchDevice_Capabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTouchDevice_Capabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTouchDevice_Capabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTouchDevice::Capabilities *sipCpp = reinterpret_cast< ::QTouchDevice::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchDevice_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QTouchDevice::Capabilities::operator&=(a0);

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


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___and__(PyObject *,PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTouchDevice::Capabilities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTouchDevice_Capabilities, &a0, &a0State, &a1))
        {
             ::QTouchDevice::Capabilities*sipRes;

            sipRes = new  ::QTouchDevice::Capabilities((*a0 & a1));
            sipReleaseType(a0,sipType_QTouchDevice_Capabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTouchDevice_Capabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___invert__(PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___invert__(PyObject *sipSelf)
{
     ::QTouchDevice::Capabilities *sipCpp = reinterpret_cast< ::QTouchDevice::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchDevice_Capabilities));

    if (!sipCpp)
        return 0;


    {
        {
             ::QTouchDevice::Capabilities*sipRes;

            sipRes = new  ::QTouchDevice::Capabilities(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QTouchDevice_Capabilities,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTouchDevice_Capabilities___int__(PyObject *);}
static PyObject *slot_QTouchDevice_Capabilities___int__(PyObject *sipSelf)
{
     ::QTouchDevice::Capabilities *sipCpp = reinterpret_cast< ::QTouchDevice::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchDevice_Capabilities));

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
extern "C" {static void release_QTouchDevice_Capabilities(void *, int);}
static void release_QTouchDevice_Capabilities(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTouchDevice::Capabilities *>(sipCppV);
}


extern "C" {static void assign_QTouchDevice_Capabilities(void *, SIP_SSIZE_T, void *);}
static void assign_QTouchDevice_Capabilities(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTouchDevice::Capabilities *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTouchDevice::Capabilities *>(sipSrc);
}


extern "C" {static void *array_QTouchDevice_Capabilities(SIP_SSIZE_T);}
static void *array_QTouchDevice_Capabilities(SIP_SSIZE_T sipNrElem)
{
    return new  ::QTouchDevice::Capabilities[sipNrElem];
}


extern "C" {static void *copy_QTouchDevice_Capabilities(const void *, SIP_SSIZE_T);}
static void *copy_QTouchDevice_Capabilities(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QTouchDevice::Capabilities(reinterpret_cast<const  ::QTouchDevice::Capabilities *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTouchDevice_Capabilities(sipSimpleWrapper *);}
static void dealloc_QTouchDevice_Capabilities(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTouchDevice_Capabilities(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTouchDevice_Capabilities(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTouchDevice_Capabilities(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTouchDevice::Capabilities *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QTouchDevice::Capabilities();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QTouchDevice::Capabilities(a0);

            return sipCpp;
        }
    }

    {
        const  ::QTouchDevice::Capabilities* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTouchDevice_Capabilities, &a0, &a0State))
        {
            sipCpp = new  ::QTouchDevice::Capabilities(*a0);
            sipReleaseType(const_cast< ::QTouchDevice::Capabilities *>(a0),sipType_QTouchDevice_Capabilities,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTouchDevice_Capabilities(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTouchDevice_Capabilities(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QTouchDevice::Capabilities **sipCppPtr = reinterpret_cast< ::QTouchDevice::Capabilities **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTouchDevice::Capabilities is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTouchDevice_CapabilityFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTouchDevice_Capabilities, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTouchDevice_CapabilityFlag)))
{
    *sipCppPtr = new QTouchDevice::Capabilities(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTouchDevice::Capabilities *>(sipConvertToType(sipPy, sipType_QTouchDevice_Capabilities, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTouchDeviceCapabilities.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTouchDevice_Capabilities[] = {
    {(void *)slot_QTouchDevice_Capabilities___hash__, hash_slot},
    {(void *)slot_QTouchDevice_Capabilities___bool__, bool_slot},
    {(void *)slot_QTouchDevice_Capabilities___ne__, ne_slot},
    {(void *)slot_QTouchDevice_Capabilities___eq__, eq_slot},
    {(void *)slot_QTouchDevice_Capabilities___ixor__, ixor_slot},
    {(void *)slot_QTouchDevice_Capabilities___xor__, xor_slot},
    {(void *)slot_QTouchDevice_Capabilities___ior__, ior_slot},
    {(void *)slot_QTouchDevice_Capabilities___or__, or_slot},
    {(void *)slot_QTouchDevice_Capabilities___iand__, iand_slot},
    {(void *)slot_QTouchDevice_Capabilities___and__, and_slot},
    {(void *)slot_QTouchDevice_Capabilities___invert__, invert_slot},
    {(void *)slot_QTouchDevice_Capabilities___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTouchDevice_Capabilities, "\1QTouchDevice.Capabilities()\n"
"QTouchDevice.Capabilities(Union[QTouchDevice.Capabilities, QTouchDevice.CapabilityFlag])\n"
"QTouchDevice.Capabilities(QTouchDevice.Capabilities)");


static pyqt5ClassPluginDef plugin_QTouchDevice_Capabilities = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QTouchDevice_Capabilities = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTouchDevice__Capabilities,
        {0},
        &plugin_QTouchDevice_Capabilities
    },
    {
        sipNameNr_Capabilities,
        {337, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTouchDevice_Capabilities,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTouchDevice_Capabilities,
    init_type_QTouchDevice_Capabilities,
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
    dealloc_QTouchDevice_Capabilities,
    assign_QTouchDevice_Capabilities,
    array_QTouchDevice_Capabilities,
    copy_QTouchDevice_Capabilities,
    release_QTouchDevice_Capabilities,
    0,
    convertTo_QTouchDevice_Capabilities,
    0,
    0,
    0,
    0,
    0
};
