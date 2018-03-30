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

#include "sipAPIQtDBus.h"

#line 41 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusConnectionRegisterOptions.cpp"

#line 41 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusConnectionRegisterOptions.cpp"


extern "C" {static long slot_QDBusConnection_RegisterOptions___hash__(PyObject *);}
static long slot_QDBusConnection_RegisterOptions___hash__(PyObject *sipSelf)
{
     ::QDBusConnection::RegisterOptions *sipCpp = reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_RegisterOptions));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QDBusConnection::RegisterOptions::Int();
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusConnectionRegisterOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QDBusConnection_RegisterOptions___bool__(PyObject *);}
static int slot_QDBusConnection_RegisterOptions___bool__(PyObject *sipSelf)
{
     ::QDBusConnection::RegisterOptions *sipCpp = reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_RegisterOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDBusConnection::RegisterOptions::Int() != 0);
#line 76 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusConnectionRegisterOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDBusConnection::RegisterOptions *sipCpp = reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_RegisterOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusConnection::RegisterOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusConnection_RegisterOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDBusConnection::RegisterOptions::Int() != a0->operator QDBusConnection::RegisterOptions::Int());
#line 106 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusConnectionRegisterOptions.cpp"
            sipReleaseType(const_cast< ::QDBusConnection::RegisterOptions *>(a0),sipType_QDBusConnection_RegisterOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, ne_slot, sipType_QDBusConnection_RegisterOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDBusConnection::RegisterOptions *sipCpp = reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_RegisterOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusConnection::RegisterOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusConnection_RegisterOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDBusConnection::RegisterOptions::Int() == a0->operator QDBusConnection::RegisterOptions::Int());
#line 142 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusConnectionRegisterOptions.cpp"
            sipReleaseType(const_cast< ::QDBusConnection::RegisterOptions *>(a0),sipType_QDBusConnection_RegisterOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, eq_slot, sipType_QDBusConnection_RegisterOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDBusConnection_RegisterOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDBusConnection::RegisterOptions *sipCpp = reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_RegisterOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QDBusConnection::RegisterOptions(*sipCpp ^ a0);
#line 181 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusConnectionRegisterOptions.cpp"

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


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDBusConnection::RegisterOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDBusConnection_RegisterOptions, &a0, &a0State, &a1))
        {
             ::QDBusConnection::RegisterOptions*sipRes;

            sipRes = new  ::QDBusConnection::RegisterOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QDBusConnection_RegisterOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_RegisterOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDBusConnection_RegisterOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDBusConnection::RegisterOptions *sipCpp = reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_RegisterOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QDBusConnection::RegisterOptions(*sipCpp | a0);
#line 253 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusConnectionRegisterOptions.cpp"

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


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDBusConnection::RegisterOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDBusConnection_RegisterOptions, &a0, &a0State, &a1))
        {
             ::QDBusConnection::RegisterOptions*sipRes;

            sipRes = new  ::QDBusConnection::RegisterOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QDBusConnection_RegisterOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_RegisterOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDBusConnection_RegisterOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDBusConnection::RegisterOptions *sipCpp = reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_RegisterOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QDBusConnection::RegisterOptions::operator&=(a0);

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


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDBusConnection::RegisterOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDBusConnection_RegisterOptions, &a0, &a0State, &a1))
        {
             ::QDBusConnection::RegisterOptions*sipRes;

            sipRes = new  ::QDBusConnection::RegisterOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QDBusConnection_RegisterOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_RegisterOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___invert__(PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___invert__(PyObject *sipSelf)
{
     ::QDBusConnection::RegisterOptions *sipCpp = reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_RegisterOptions));

    if (!sipCpp)
        return 0;


    {
        {
             ::QDBusConnection::RegisterOptions*sipRes;

            sipRes = new  ::QDBusConnection::RegisterOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_RegisterOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDBusConnection_RegisterOptions___int__(PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOptions___int__(PyObject *sipSelf)
{
     ::QDBusConnection::RegisterOptions *sipCpp = reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_RegisterOptions));

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
extern "C" {static void release_QDBusConnection_RegisterOptions(void *, int);}
static void release_QDBusConnection_RegisterOptions(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipCppV);
}


extern "C" {static void assign_QDBusConnection_RegisterOptions(void *, SIP_SSIZE_T, void *);}
static void assign_QDBusConnection_RegisterOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDBusConnection::RegisterOptions *>(sipSrc);
}


extern "C" {static void *array_QDBusConnection_RegisterOptions(SIP_SSIZE_T);}
static void *array_QDBusConnection_RegisterOptions(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDBusConnection::RegisterOptions[sipNrElem];
}


extern "C" {static void *copy_QDBusConnection_RegisterOptions(const void *, SIP_SSIZE_T);}
static void *copy_QDBusConnection_RegisterOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDBusConnection::RegisterOptions(reinterpret_cast<const  ::QDBusConnection::RegisterOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusConnection_RegisterOptions(sipSimpleWrapper *);}
static void dealloc_QDBusConnection_RegisterOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDBusConnection_RegisterOptions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDBusConnection_RegisterOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusConnection_RegisterOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDBusConnection::RegisterOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QDBusConnection::RegisterOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QDBusConnection::RegisterOptions(a0);

            return sipCpp;
        }
    }

    {
        const  ::QDBusConnection::RegisterOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDBusConnection_RegisterOptions, &a0, &a0State))
        {
            sipCpp = new  ::QDBusConnection::RegisterOptions(*a0);
            sipReleaseType(const_cast< ::QDBusConnection::RegisterOptions *>(a0),sipType_QDBusConnection_RegisterOptions,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDBusConnection_RegisterOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDBusConnection_RegisterOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QDBusConnection::RegisterOptions **sipCppPtr = reinterpret_cast< ::QDBusConnection::RegisterOptions **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDBusConnection::RegisterOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDBusConnection_RegisterOption)) ||
            sipCanConvertToType(sipPy, sipType_QDBusConnection_RegisterOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDBusConnection_RegisterOption)))
{
    *sipCppPtr = new QDBusConnection::RegisterOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDBusConnection::RegisterOptions *>(sipConvertToType(sipPy, sipType_QDBusConnection_RegisterOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusConnectionRegisterOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDBusConnection_RegisterOptions[] = {
    {(void *)slot_QDBusConnection_RegisterOptions___hash__, hash_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___bool__, bool_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___ne__, ne_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___eq__, eq_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___ixor__, ixor_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___xor__, xor_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___ior__, ior_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___or__, or_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___iand__, iand_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___and__, and_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___invert__, invert_slot},
    {(void *)slot_QDBusConnection_RegisterOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDBusConnection_RegisterOptions, "\1QDBusConnection.RegisterOptions()\n"
"QDBusConnection.RegisterOptions(Union[QDBusConnection.RegisterOptions, QDBusConnection.RegisterOption])\n"
"QDBusConnection.RegisterOptions(QDBusConnection.RegisterOptions)");


static pyqt5ClassPluginDef plugin_QDBusConnection_RegisterOptions = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDBus_QDBusConnection_RegisterOptions = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDBusConnection__RegisterOptions,
        {0},
        &plugin_QDBusConnection_RegisterOptions
    },
    {
        sipNameNr_RegisterOptions,
        {5, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusConnection_RegisterOptions,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDBusConnection_RegisterOptions,
    init_type_QDBusConnection_RegisterOptions,
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
    dealloc_QDBusConnection_RegisterOptions,
    assign_QDBusConnection_RegisterOptions,
    array_QDBusConnection_RegisterOptions,
    copy_QDBusConnection_RegisterOptions,
    release_QDBusConnection_RegisterOptions,
    0,
    convertTo_QDBusConnection_RegisterOptions,
    0,
    0,
    0,
    0,
    0
};
