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

#include "sipAPIQtNetwork.h"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qhostinfo.sip"
#include <qhostinfo.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHostInfo.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHostInfo.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHostInfo.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHostInfo.cpp"


PyDoc_STRVAR(doc_QHostInfo_hostName, "hostName(self) -> str");

extern "C" {static PyObject *meth_QHostInfo_hostName(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_hostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostInfo, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->hostName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_hostName, doc_QHostInfo_hostName);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_setHostName, "setHostName(self, str)");

extern "C" {static PyObject *meth_QHostInfo_setHostName(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_setHostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostInfo, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setHostName(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_setHostName, doc_QHostInfo_setHostName);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_addresses, "addresses(self) -> object");

extern "C" {static PyObject *meth_QHostInfo_addresses(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_addresses(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostInfo, &sipCpp))
        {
            QList< ::QHostAddress>*sipRes;

            sipRes = new QList< ::QHostAddress>(sipCpp->addresses());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QHostAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_addresses, doc_QHostInfo_addresses);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_setAddresses, "setAddresses(self, Iterable[Union[QHostAddress, QHostAddress.SpecialAddress]])");

extern "C" {static PyObject *meth_QHostInfo_setAddresses(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_setAddresses(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList< ::QHostAddress>* a0;
        int a0State = 0;
         ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostInfo, &sipCpp, sipType_QList_0100QHostAddress,&a0, &a0State))
        {
            sipCpp->setAddresses(*a0);
            sipReleaseType(const_cast<QList< ::QHostAddress> *>(a0),sipType_QList_0100QHostAddress,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_setAddresses, doc_QHostInfo_setAddresses);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_error, "error(self) -> QHostInfo.HostInfoError");

extern "C" {static PyObject *meth_QHostInfo_error(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostInfo, &sipCpp))
        {
             ::QHostInfo::HostInfoError sipRes;

            sipRes = sipCpp->error();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QHostInfo_HostInfoError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_error, doc_QHostInfo_error);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_setError, "setError(self, QHostInfo.HostInfoError)");

extern "C" {static PyObject *meth_QHostInfo_setError(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_setError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QHostInfo::HostInfoError a0;
         ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QHostInfo, &sipCpp, sipType_QHostInfo_HostInfoError, &a0))
        {
            sipCpp->setError(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_setError, doc_QHostInfo_setError);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QHostInfo_errorString(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostInfo, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_errorString, doc_QHostInfo_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_setErrorString, "setErrorString(self, str)");

extern "C" {static PyObject *meth_QHostInfo_setErrorString(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_setErrorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostInfo, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setErrorString(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_setErrorString, doc_QHostInfo_setErrorString);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_setLookupId, "setLookupId(self, int)");

extern "C" {static PyObject *meth_QHostInfo_setLookupId(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_setLookupId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QHostInfo, &sipCpp, &a0))
        {
            sipCpp->setLookupId(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_setLookupId, doc_QHostInfo_setLookupId);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_lookupId, "lookupId(self) -> int");

extern "C" {static PyObject *meth_QHostInfo_lookupId(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_lookupId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostInfo, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->lookupId();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_lookupId, doc_QHostInfo_lookupId);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_lookupHost, "lookupHost(str, PYQT_SLOT) -> int");

extern "C" {static PyObject *meth_QHostInfo_lookupHost(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_lookupHost(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        PyObject * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1P0", sipType_QString,&a0, &a0State, &a1))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 52 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qhostinfo.sip"
        QObject *receiver;
        QByteArray slot_signature;
        
        if ((sipError = pyqt5_qtnetwork_get_connection_parts(a1, 0, "(QHostInfo)", true, &receiver, slot_signature)) == sipErrorNone)
        {
            QHostInfo::lookupHost(*a0, receiver, slot_signature.constData());
        }
        else if (sipError == sipErrorContinue)
        {
            sipError = sipBadCallableArg(1, a1);
        }
#line 358 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHostInfo.cpp"
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return SIPLong_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_lookupHost, doc_QHostInfo_lookupHost);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_abortHostLookup, "abortHostLookup(int)");

extern "C" {static PyObject *meth_QHostInfo_abortHostLookup(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_abortHostLookup(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
             ::QHostInfo::abortHostLookup(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_abortHostLookup, doc_QHostInfo_abortHostLookup);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_fromName, "fromName(str) -> QHostInfo");

extern "C" {static PyObject *meth_QHostInfo_fromName(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_fromName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
             ::QHostInfo*sipRes;

            sipRes = new  ::QHostInfo( ::QHostInfo::fromName(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QHostInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_fromName, doc_QHostInfo_fromName);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_localHostName, "localHostName() -> str");

extern "C" {static PyObject *meth_QHostInfo_localHostName(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_localHostName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QHostInfo::localHostName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_localHostName, doc_QHostInfo_localHostName);

    return NULL;
}


PyDoc_STRVAR(doc_QHostInfo_localDomainName, "localDomainName() -> str");

extern "C" {static PyObject *meth_QHostInfo_localDomainName(PyObject *, PyObject *);}
static PyObject *meth_QHostInfo_localDomainName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QHostInfo::localDomainName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostInfo, sipName_localDomainName, doc_QHostInfo_localDomainName);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHostInfo(void *, int);}
static void release_QHostInfo(void *sipCppV, int)
{
    delete reinterpret_cast< ::QHostInfo *>(sipCppV);
}


extern "C" {static void assign_QHostInfo(void *, SIP_SSIZE_T, void *);}
static void assign_QHostInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QHostInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QHostInfo *>(sipSrc);
}


extern "C" {static void *array_QHostInfo(SIP_SSIZE_T);}
static void *array_QHostInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::QHostInfo[sipNrElem];
}


extern "C" {static void *copy_QHostInfo(const void *, SIP_SSIZE_T);}
static void *copy_QHostInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QHostInfo(reinterpret_cast<const  ::QHostInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHostInfo(sipSimpleWrapper *);}
static void dealloc_QHostInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QHostInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QHostInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHostInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QHostInfo *sipCpp = 0;

    {
        int a0 = -1;

        static const char *sipKwdList[] = {
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|i", &a0))
        {
            sipCpp = new  ::QHostInfo(a0);

            return sipCpp;
        }
    }

    {
        const  ::QHostInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHostInfo, &a0))
        {
            sipCpp = new  ::QHostInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QHostInfo[] = {
    {SIP_MLNAME_CAST(sipName_abortHostLookup), meth_QHostInfo_abortHostLookup, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_abortHostLookup)},
    {SIP_MLNAME_CAST(sipName_addresses), meth_QHostInfo_addresses, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_addresses)},
    {SIP_MLNAME_CAST(sipName_error), meth_QHostInfo_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_error)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QHostInfo_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_errorString)},
    {SIP_MLNAME_CAST(sipName_fromName), meth_QHostInfo_fromName, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_fromName)},
    {SIP_MLNAME_CAST(sipName_hostName), meth_QHostInfo_hostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_hostName)},
    {SIP_MLNAME_CAST(sipName_localDomainName), meth_QHostInfo_localDomainName, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_localDomainName)},
    {SIP_MLNAME_CAST(sipName_localHostName), meth_QHostInfo_localHostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_localHostName)},
    {SIP_MLNAME_CAST(sipName_lookupHost), meth_QHostInfo_lookupHost, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_lookupHost)},
    {SIP_MLNAME_CAST(sipName_lookupId), meth_QHostInfo_lookupId, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_lookupId)},
    {SIP_MLNAME_CAST(sipName_setAddresses), meth_QHostInfo_setAddresses, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_setAddresses)},
    {SIP_MLNAME_CAST(sipName_setError), meth_QHostInfo_setError, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_setError)},
    {SIP_MLNAME_CAST(sipName_setErrorString), meth_QHostInfo_setErrorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_setErrorString)},
    {SIP_MLNAME_CAST(sipName_setHostName), meth_QHostInfo_setHostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_setHostName)},
    {SIP_MLNAME_CAST(sipName_setLookupId), meth_QHostInfo_setLookupId, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostInfo_setLookupId)}
};

static sipEnumMemberDef enummembers_QHostInfo[] = {
    {sipName_HostNotFound, static_cast<int>( ::QHostInfo::HostNotFound), 24},
    {sipName_NoError, static_cast<int>( ::QHostInfo::NoError), 24},
    {sipName_UnknownError, static_cast<int>( ::QHostInfo::UnknownError), 24},
};

PyDoc_STRVAR(doc_QHostInfo, "\1QHostInfo(id: int = -1)\n"
"QHostInfo(QHostInfo)");


static pyqt5ClassPluginDef plugin_QHostInfo = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtNetwork_QHostInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QHostInfo,
        {0},
        &plugin_QHostInfo
    },
    {
        sipNameNr_QHostInfo,
        {0, 0, 1},
        15, methods_QHostInfo,
        3, enummembers_QHostInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHostInfo,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QHostInfo,
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
    dealloc_QHostInfo,
    assign_QHostInfo,
    array_QHostInfo,
    copy_QHostInfo,
    release_QHostInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
