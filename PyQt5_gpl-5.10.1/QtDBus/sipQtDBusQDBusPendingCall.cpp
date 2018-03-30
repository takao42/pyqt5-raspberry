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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qdbuspendingcall.sip"
#include <qdbuspendingcall.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusPendingCall.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qdbusmessage.sip"
#include <qdbusmessage.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusPendingCall.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qdbuserror.sip"
#include <qdbuserror.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusPendingCall.cpp"


PyDoc_STRVAR(doc_QDBusPendingCall_fromError, "fromError(QDBusError) -> QDBusPendingCall");

extern "C" {static PyObject *meth_QDBusPendingCall_fromError(PyObject *, PyObject *);}
static PyObject *meth_QDBusPendingCall_fromError(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusError* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QDBusError, &a0))
        {
             ::QDBusPendingCall*sipRes;

            sipRes = new  ::QDBusPendingCall( ::QDBusPendingCall::fromError(*a0));

            return sipConvertFromNewType(sipRes,sipType_QDBusPendingCall,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingCall, sipName_fromError, doc_QDBusPendingCall_fromError);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusPendingCall_fromCompletedCall, "fromCompletedCall(QDBusMessage) -> QDBusPendingCall");

extern "C" {static PyObject *meth_QDBusPendingCall_fromCompletedCall(PyObject *, PyObject *);}
static PyObject *meth_QDBusPendingCall_fromCompletedCall(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QDBusMessage, &a0))
        {
             ::QDBusPendingCall*sipRes;

            sipRes = new  ::QDBusPendingCall( ::QDBusPendingCall::fromCompletedCall(*a0));

            return sipConvertFromNewType(sipRes,sipType_QDBusPendingCall,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingCall, sipName_fromCompletedCall, doc_QDBusPendingCall_fromCompletedCall);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusPendingCall_swap, "swap(self, QDBusPendingCall)");

extern "C" {static PyObject *meth_QDBusPendingCall_swap(PyObject *, PyObject *);}
static PyObject *meth_QDBusPendingCall_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDBusPendingCall* a0;
         ::QDBusPendingCall *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDBusPendingCall, &sipCpp, sipType_QDBusPendingCall, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingCall, sipName_swap, doc_QDBusPendingCall_swap);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusPendingCall(void *, int);}
static void release_QDBusPendingCall(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDBusPendingCall *>(sipCppV);
}


extern "C" {static void dealloc_QDBusPendingCall(sipSimpleWrapper *);}
static void dealloc_QDBusPendingCall(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDBusPendingCall(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDBusPendingCall(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusPendingCall(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDBusPendingCall *sipCpp = 0;

    {
        const  ::QDBusPendingCall* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusPendingCall, &a0))
        {
            sipCpp = new  ::QDBusPendingCall(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDBusPendingCall[] = {
    {SIP_MLNAME_CAST(sipName_fromCompletedCall), meth_QDBusPendingCall_fromCompletedCall, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusPendingCall_fromCompletedCall)},
    {SIP_MLNAME_CAST(sipName_fromError), meth_QDBusPendingCall_fromError, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusPendingCall_fromError)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDBusPendingCall_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusPendingCall_swap)}
};

PyDoc_STRVAR(doc_QDBusPendingCall, "\1QDBusPendingCall(QDBusPendingCall)");


static pyqt5ClassPluginDef plugin_QDBusPendingCall = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDBus_QDBusPendingCall = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDBusPendingCall,
        {0},
        &plugin_QDBusPendingCall
    },
    {
        sipNameNr_QDBusPendingCall,
        {0, 0, 1},
        3, methods_QDBusPendingCall,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusPendingCall,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDBusPendingCall,
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
    dealloc_QDBusPendingCall,
    0,
    0,
    0,
    release_QDBusPendingCall,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
