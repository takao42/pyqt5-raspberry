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

#line 51 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qdbusextratypes.sip"
#include <qdbusextratypes.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusSignature.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusSignature.cpp"


PyDoc_STRVAR(doc_QDBusSignature_signature, "signature(self) -> str");

extern "C" {static PyObject *meth_QDBusSignature_signature(PyObject *, PyObject *);}
static PyObject *meth_QDBusSignature_signature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusSignature *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusSignature, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->signature());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusSignature, sipName_signature, doc_QDBusSignature_signature);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusSignature_setSignature, "setSignature(self, str)");

extern "C" {static PyObject *meth_QDBusSignature_setSignature(PyObject *, PyObject *);}
static PyObject *meth_QDBusSignature_setSignature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QDBusSignature *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDBusSignature, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setSignature(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusSignature, sipName_setSignature, doc_QDBusSignature_setSignature);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusSignature_swap, "swap(self, QDBusSignature)");

extern "C" {static PyObject *meth_QDBusSignature_swap(PyObject *, PyObject *);}
static PyObject *meth_QDBusSignature_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDBusSignature* a0;
         ::QDBusSignature *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDBusSignature, &sipCpp, sipType_QDBusSignature, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusSignature, sipName_swap, doc_QDBusSignature_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QDBusSignature___ge__(PyObject *,PyObject *);}
static PyObject *slot_QDBusSignature___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDBusSignature *sipCpp = reinterpret_cast< ::QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusSignature* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusSignature, &a0))
        {
            bool sipRes;

            sipRes = !operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, ge_slot, sipType_QDBusSignature, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDBusSignature___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDBusSignature___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDBusSignature *sipCpp = reinterpret_cast< ::QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusSignature* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusSignature, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, eq_slot, sipType_QDBusSignature, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDBusSignature___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDBusSignature___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDBusSignature *sipCpp = reinterpret_cast< ::QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusSignature* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusSignature, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, ne_slot, sipType_QDBusSignature, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDBusSignature___lt__(PyObject *,PyObject *);}
static PyObject *slot_QDBusSignature___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDBusSignature *sipCpp = reinterpret_cast< ::QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusSignature* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusSignature, &a0))
        {
            bool sipRes;

            sipRes = operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, lt_slot, sipType_QDBusSignature, sipSelf, sipArg);
}


extern "C" {static long slot_QDBusSignature___hash__(PyObject *);}
static long slot_QDBusSignature___hash__(PyObject *sipSelf)
{
     ::QDBusSignature *sipCpp = reinterpret_cast< ::QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 61 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qdbusextratypes.sip"
        sipRes = qHash(*sipCpp, 0);
#line 265 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusSignature.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusSignature(void *, int);}
static void release_QDBusSignature(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDBusSignature *>(sipCppV);
}


extern "C" {static void assign_QDBusSignature(void *, SIP_SSIZE_T, void *);}
static void assign_QDBusSignature(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDBusSignature *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDBusSignature *>(sipSrc);
}


extern "C" {static void *array_QDBusSignature(SIP_SSIZE_T);}
static void *array_QDBusSignature(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDBusSignature[sipNrElem];
}


extern "C" {static void *copy_QDBusSignature(const void *, SIP_SSIZE_T);}
static void *copy_QDBusSignature(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDBusSignature(reinterpret_cast<const  ::QDBusSignature *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusSignature(sipSimpleWrapper *);}
static void dealloc_QDBusSignature(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDBusSignature(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDBusSignature(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusSignature(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDBusSignature *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QDBusSignature();

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new  ::QDBusSignature(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QDBusSignature* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusSignature, &a0))
        {
            sipCpp = new  ::QDBusSignature(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDBusSignature[] = {
    {(void *)slot_QDBusSignature___ge__, ge_slot},
    {(void *)slot_QDBusSignature___eq__, eq_slot},
    {(void *)slot_QDBusSignature___ne__, ne_slot},
    {(void *)slot_QDBusSignature___lt__, lt_slot},
    {(void *)slot_QDBusSignature___hash__, hash_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDBusSignature[] = {
    {SIP_MLNAME_CAST(sipName_setSignature), meth_QDBusSignature_setSignature, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusSignature_setSignature)},
    {SIP_MLNAME_CAST(sipName_signature), meth_QDBusSignature_signature, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusSignature_signature)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDBusSignature_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusSignature_swap)}
};

PyDoc_STRVAR(doc_QDBusSignature, "\1QDBusSignature()\n"
"QDBusSignature(str)\n"
"QDBusSignature(QDBusSignature)");


static pyqt5ClassPluginDef plugin_QDBusSignature = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDBus_QDBusSignature = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDBusSignature,
        {0},
        &plugin_QDBusSignature
    },
    {
        sipNameNr_QDBusSignature,
        {0, 0, 1},
        3, methods_QDBusSignature,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusSignature,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDBusSignature,
    init_type_QDBusSignature,
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
    dealloc_QDBusSignature,
    assign_QDBusSignature,
    array_QDBusSignature,
    copy_QDBusSignature,
    release_QDBusSignature,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
