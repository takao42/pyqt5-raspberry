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

#line 27 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qpynetwork_qhash.sip"
#include <qhash.h>
#include <qnetworkrequest.h>
#include <qvariant.h>
#line 31 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qnetworkrequest.sip"
#include <qnetworkrequest.h>
#line 35 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 38 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"


extern "C" {static void assign_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *, SIP_SSIZE_T, void *);}
static void assign_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(sipSrc);
}


extern "C" {static void *array_QHash_0100QNetworkRequest_Attribute_0100QVariant(SIP_SSIZE_T);}
static void *array_QHash_0100QNetworkRequest_Attribute_0100QVariant(SIP_SSIZE_T sipNrElem)
{
    return new  ::QHash< ::QNetworkRequest::Attribute, ::QVariant>[sipNrElem];
}


extern "C" {static void *copy_QHash_0100QNetworkRequest_Attribute_0100QVariant(const void *, SIP_SSIZE_T);}
static void *copy_QHash_0100QNetworkRequest_Attribute_0100QVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QHash< ::QNetworkRequest::Attribute, ::QVariant>(reinterpret_cast<const  ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *, int);}
static void release_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *ptr, int)
{
    delete reinterpret_cast< ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(ptr);
}



extern "C" {static int convertTo_QHash_0100QNetworkRequest_Attribute_0100QVariant(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHash_0100QNetworkRequest_Attribute_0100QVariant(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QHash< ::QNetworkRequest::Attribute, ::QVariant> **sipCppPtr = reinterpret_cast< ::QHash< ::QNetworkRequest::Attribute, ::QVariant> **>(sipCppPtrV);

#line 83 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qpynetwork_qhash.sip"
    if (!sipIsErr)
        return PyDict_Check(sipPy);

    QHash<QNetworkRequest::Attribute, QVariant> *qh = new QHash<QNetworkRequest::Attribute, QVariant>;

    Py_ssize_t pos = 0;
    PyObject *kobj, *vobj;
 
    while (PyDict_Next(sipPy, &pos, &kobj, &vobj))
    {
        int k = sipConvertToEnum(kobj, sipType_QNetworkRequest_Attribute);

        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "a key has type '%s' but 'QNetworkRequest.Attribute' is expected",
                    sipPyTypeName(Py_TYPE(kobj)));

            delete qh;
            *sipIsErr = 1;

            return 0;
        }

        int vstate;
        QVariant *v = reinterpret_cast<QVariant *>(
                sipForceConvertToType(vobj, sipType_QVariant, sipTransferObj,
                        SIP_NOT_NONE, &vstate, sipIsErr));

        if (*sipIsErr)
        {
            // Any error must be internal, so leave the exception as it is.

            delete qh;

            return 0;
        }

        qh->insert(static_cast<QNetworkRequest::Attribute>(k), *v);

        sipReleaseType(v, sipType_QVariant, vstate);
    }
 
    *sipCppPtr = qh;
 
    return sipGetState(sipTransferObj);
#line 123 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"
}


extern "C" {static PyObject *convertFrom_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *, PyObject *);}
static PyObject *convertFrom_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *sipCppV, PyObject *sipTransferObj)
{
    ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *sipCpp = reinterpret_cast< ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(sipCppV);

#line 33 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qpynetwork_qhash.sip"
    PyObject *d = PyDict_New();

    if (!d)
        return 0;

    QHash<QNetworkRequest::Attribute, QVariant>::const_iterator it = sipCpp->constBegin();
    QHash<QNetworkRequest::Attribute, QVariant>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        PyObject *kobj = sipConvertFromEnum(it.key(),
                sipType_QNetworkRequest_Attribute);

        if (!kobj)
        {
            Py_DECREF(d);

            return 0;
        }

        QVariant *v = new QVariant(it.value());
        PyObject *vobj = sipConvertFromNewType(v, sipType_QVariant,
                sipTransferObj);

        if (!vobj)
        {
            delete v;
            Py_DECREF(kobj);
            Py_DECREF(d);

            return 0;
        }

        int rc = PyDict_SetItem(d, kobj, vobj);

        Py_DECREF(vobj);
        Py_DECREF(kobj);

        if (rc < 0)
        {
            Py_DECREF(d);

            return 0;
        }
    }

    return d;
#line 180 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QHash_0100QNetworkRequest_Attribute_0100QVariant = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_143,     /* QHash<QNetworkRequest::Attribute,QVariant> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    array_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    copy_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    release_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    convertTo_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    convertFrom_QHash_0100QNetworkRequest_Attribute_0100QVariant
};
