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

#line 28 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQVector0100QRectF.cpp"

#line 164 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQVector0100QRectF.cpp"


extern "C" {static void assign_QVector_0100QRectF(void *, SIP_SSIZE_T, void *);}
static void assign_QVector_0100QRectF(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QVector< ::QRectF> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QVector< ::QRectF> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QRectF(SIP_SSIZE_T);}
static void *array_QVector_0100QRectF(SIP_SSIZE_T sipNrElem)
{
    return new QVector< ::QRectF>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QRectF(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QRectF(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector< ::QRectF>(reinterpret_cast<const QVector< ::QRectF> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QRectF(void *, int);}
static void release_QVector_0100QRectF(void *ptr, int)
{
    delete reinterpret_cast<QVector< ::QRectF> *>(ptr);
}



extern "C" {static int convertTo_QVector_0100QRectF(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QRectF(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector< ::QRectF> **sipCppPtr = reinterpret_cast<QVector< ::QRectF> **>(sipCppPtrV);

#line 58 "sip/QtCore/qpycore_qvector.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        PyErr_Clear();
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QVector<QRectF> *qv = new QVector<QRectF>;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete qv;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QRectF *t = reinterpret_cast<QRectF *>(
                sipForceConvertToType(itm, sipType_QRectF, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QRectF' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QRectF, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 143 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQVector0100QRectF.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QRectF(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QRectF(void *sipCppV, PyObject *sipTransferObj)
{
   QVector< ::QRectF> *sipCpp = reinterpret_cast<QVector< ::QRectF> *>(sipCppV);

#line 32 "sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QRectF *t = new QRectF(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QRectF,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SetItem(l, i, tobj);
    }

    return l;
#line 176 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQVector0100QRectF.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_0100QRectF = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_20532,     /* QVector<QRectF> */
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
    assign_QVector_0100QRectF,
    array_QVector_0100QRectF,
    copy_QVector_0100QRectF,
    release_QVector_0100QRectF,
    convertTo_QVector_0100QRectF,
    convertFrom_QVector_0100QRectF
};
