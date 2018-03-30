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

#line 44 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qpydbusreply.sip"
#include <qdbusreply.h>
#include <qpydbusreply.h>
#line 30 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusReply0100QString.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 34 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusReply0100QString.cpp"


extern "C" {static void assign_QDBusReply_0100QString(void *, SIP_SSIZE_T, void *);}
static void assign_QDBusReply_0100QString(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QDBusReply< ::QString> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QDBusReply< ::QString> *>(sipSrc);
}


extern "C" {static void *array_QDBusReply_0100QString(SIP_SSIZE_T);}
static void *array_QDBusReply_0100QString(SIP_SSIZE_T sipNrElem)
{
    return new QDBusReply< ::QString>[sipNrElem];
}


extern "C" {static void *copy_QDBusReply_0100QString(const void *, SIP_SSIZE_T);}
static void *copy_QDBusReply_0100QString(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDBusReply< ::QString>(reinterpret_cast<const QDBusReply< ::QString> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QDBusReply_0100QString(void *, int);}
static void release_QDBusReply_0100QString(void *ptr, int)
{
    delete reinterpret_cast<QDBusReply< ::QString> *>(ptr);
}



extern "C" {static int convertTo_QDBusReply_0100QString(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDBusReply_0100QString(PyObject *,void **,int *,PyObject *)
{
#line 82 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qpydbusreply.sip"
    // We never create a QDBusReply from Python.
    return 0;
#line 73 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusReply0100QString.cpp"
}


extern "C" {static PyObject *convertFrom_QDBusReply_0100QString(void *, PyObject *);}
static PyObject *convertFrom_QDBusReply_0100QString(void *sipCppV, PyObject *sipTransferObj)
{
   QDBusReply< ::QString> *sipCpp = reinterpret_cast<QDBusReply< ::QString> *>(sipCppV);

#line 49 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qpydbusreply.sip"
    PyObject *value_obj;

    if (sipCpp->isValid())
    {
        // Convert the value to a Python object.
        QString *value = new QString(sipCpp->value());

        if ((value_obj = sipConvertFromNewType(value, sipType_QString, NULL)) == NULL)
        {
            delete value;
            return NULL;
        }
    }
    else
    {
        value_obj = 0;
    }

    QPyDBusReply *reply = new QPyDBusReply(value_obj,
            sipCpp->isValid(), sipCpp->error());

    PyObject *reply_obj = sipConvertFromNewType(reply, sipType_QPyDBusReply, sipTransferObj);

    if (reply_obj == NULL)
    {
        delete reply;
        return NULL;
    }

    return reply_obj;
#line 113 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBusReply0100QString.cpp"
}


sipMappedTypeDef sipTypeDef_QtDBus_QDBusReply_0100QString = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1217,     /* QDBusReply<QString> */
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
    assign_QDBusReply_0100QString,
    array_QDBusReply_0100QString,
    copy_QDBusReply_0100QString,
    release_QDBusReply_0100QString,
    convertTo_QDBusReply_0100QString,
    convertFrom_QDBusReply_0100QString
};
