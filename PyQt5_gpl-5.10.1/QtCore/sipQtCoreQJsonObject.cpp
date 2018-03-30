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

#line 25 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qjsonobject.sip"
#include <qjsonobject.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQJsonObject.cpp"



extern "C" {static void assign_QJsonObject(void *, SIP_SSIZE_T, void *);}
static void assign_QJsonObject(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QJsonObject *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QJsonObject *>(sipSrc);
}


extern "C" {static void *array_QJsonObject(SIP_SSIZE_T);}
static void *array_QJsonObject(SIP_SSIZE_T sipNrElem)
{
    return new  ::QJsonObject[sipNrElem];
}


extern "C" {static void *copy_QJsonObject(const void *, SIP_SSIZE_T);}
static void *copy_QJsonObject(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QJsonObject(reinterpret_cast<const  ::QJsonObject *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QJsonObject(void *, int);}
static void release_QJsonObject(void *ptr, int)
{
    delete reinterpret_cast< ::QJsonObject *>(ptr);
}



extern "C" {static int convertTo_QJsonObject(PyObject *, void **, int *, PyObject *);}
static int convertTo_QJsonObject(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QJsonObject **sipCppPtr = reinterpret_cast< ::QJsonObject **>(sipCppPtrV);

#line 83 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qjsonobject.sip"
    if (!sipIsErr)
        return PyDict_Check(sipPy);

    QJsonObject *jo = new QJsonObject;

    Py_ssize_t pos = 0;
    PyObject *kobj, *vobj;
 
    while (PyDict_Next(sipPy, &pos, &kobj, &vobj))
    {
        int kstate;
        QString *k = reinterpret_cast<QString *>(
                sipForceConvertToType(kobj, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &kstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a key has type '%s' but 'str' is expected",
                    sipPyTypeName(Py_TYPE(kobj)));

            delete jo;

            return 0;
        }

        int vstate;
        QJsonValue *v = reinterpret_cast<QJsonValue *>(
                sipForceConvertToType(vobj, sipType_QJsonValue, sipTransferObj,
                        SIP_NOT_NONE, &vstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a value has type '%s' but 'QJsonValue' is expected",
                    sipPyTypeName(Py_TYPE(vobj)));

            sipReleaseType(k, sipType_QString, kstate);
            delete jo;

            return 0;
        }

        jo->insert(*k, *v);

        sipReleaseType(v, sipType_QJsonValue, vstate);
        sipReleaseType(k, sipType_QString, kstate);
    }
 
    *sipCppPtr = jo;
 
    return sipGetState(sipTransferObj);
#line 121 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQJsonObject.cpp"
}


extern "C" {static PyObject *convertFrom_QJsonObject(void *, PyObject *);}
static PyObject *convertFrom_QJsonObject(void *sipCppV, PyObject *sipTransferObj)
{
    ::QJsonObject *sipCpp = reinterpret_cast< ::QJsonObject *>(sipCppV);

#line 29 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qjsonobject.sip"
    PyObject *d = PyDict_New();

    if (!d)
        return 0;

    QJsonObject::const_iterator it = sipCpp->constBegin();
    QJsonObject::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        QString *k = new QString(it.key());
        PyObject *kobj = sipConvertFromNewType(k, sipType_QString,
                sipTransferObj);

        if (!kobj)
        {
            delete k;
            Py_DECREF(d);

            return 0;
        }

        QJsonValue *v = new QJsonValue(it.value());
        PyObject *vobj = sipConvertFromNewType(v, sipType_QJsonValue,
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

        ++it;
    }

    return d;
#line 182 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQJsonObject.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QJsonObject = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QJsonObject,     /* QJsonObject */
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
    assign_QJsonObject,
    array_QJsonObject,
    copy_QJsonObject,
    release_QJsonObject,
    convertTo_QJsonObject,
    convertFrom_QJsonObject
};
