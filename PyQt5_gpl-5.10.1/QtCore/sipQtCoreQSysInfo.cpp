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

#line 24 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qsysinfo.sip"
#include <qsysinfo.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQSysInfo.cpp"

#line 27 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQSysInfo.cpp"


PyDoc_STRVAR(doc_QSysInfo_buildAbi, "buildAbi() -> str");

extern "C" {static PyObject *meth_QSysInfo_buildAbi(PyObject *, PyObject *);}
static PyObject *meth_QSysInfo_buildAbi(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QSysInfo::buildAbi());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSysInfo, sipName_buildAbi, doc_QSysInfo_buildAbi);

    return NULL;
}


PyDoc_STRVAR(doc_QSysInfo_buildCpuArchitecture, "buildCpuArchitecture() -> str");

extern "C" {static PyObject *meth_QSysInfo_buildCpuArchitecture(PyObject *, PyObject *);}
static PyObject *meth_QSysInfo_buildCpuArchitecture(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QSysInfo::buildCpuArchitecture());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSysInfo, sipName_buildCpuArchitecture, doc_QSysInfo_buildCpuArchitecture);

    return NULL;
}


PyDoc_STRVAR(doc_QSysInfo_currentCpuArchitecture, "currentCpuArchitecture() -> str");

extern "C" {static PyObject *meth_QSysInfo_currentCpuArchitecture(PyObject *, PyObject *);}
static PyObject *meth_QSysInfo_currentCpuArchitecture(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QSysInfo::currentCpuArchitecture());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSysInfo, sipName_currentCpuArchitecture, doc_QSysInfo_currentCpuArchitecture);

    return NULL;
}


PyDoc_STRVAR(doc_QSysInfo_kernelType, "kernelType() -> str");

extern "C" {static PyObject *meth_QSysInfo_kernelType(PyObject *, PyObject *);}
static PyObject *meth_QSysInfo_kernelType(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QSysInfo::kernelType());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSysInfo, sipName_kernelType, doc_QSysInfo_kernelType);

    return NULL;
}


PyDoc_STRVAR(doc_QSysInfo_kernelVersion, "kernelVersion() -> str");

extern "C" {static PyObject *meth_QSysInfo_kernelVersion(PyObject *, PyObject *);}
static PyObject *meth_QSysInfo_kernelVersion(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QSysInfo::kernelVersion());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSysInfo, sipName_kernelVersion, doc_QSysInfo_kernelVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QSysInfo_prettyProductName, "prettyProductName() -> str");

extern "C" {static PyObject *meth_QSysInfo_prettyProductName(PyObject *, PyObject *);}
static PyObject *meth_QSysInfo_prettyProductName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QSysInfo::prettyProductName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSysInfo, sipName_prettyProductName, doc_QSysInfo_prettyProductName);

    return NULL;
}


PyDoc_STRVAR(doc_QSysInfo_productType, "productType() -> str");

extern "C" {static PyObject *meth_QSysInfo_productType(PyObject *, PyObject *);}
static PyObject *meth_QSysInfo_productType(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QSysInfo::productType());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSysInfo, sipName_productType, doc_QSysInfo_productType);

    return NULL;
}


PyDoc_STRVAR(doc_QSysInfo_productVersion, "productVersion() -> str");

extern "C" {static PyObject *meth_QSysInfo_productVersion(PyObject *, PyObject *);}
static PyObject *meth_QSysInfo_productVersion(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QSysInfo::productVersion());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSysInfo, sipName_productVersion, doc_QSysInfo_productVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QSysInfo_machineHostName, "machineHostName() -> str");

extern "C" {static PyObject *meth_QSysInfo_machineHostName(PyObject *, PyObject *);}
static PyObject *meth_QSysInfo_machineHostName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QSysInfo::machineHostName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSysInfo, sipName_machineHostName, doc_QSysInfo_machineHostName);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSysInfo(void *, int);}
static void release_QSysInfo(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSysInfo *>(sipCppV);
}


extern "C" {static void assign_QSysInfo(void *, SIP_SSIZE_T, void *);}
static void assign_QSysInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSysInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSysInfo *>(sipSrc);
}


extern "C" {static void *array_QSysInfo(SIP_SSIZE_T);}
static void *array_QSysInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSysInfo[sipNrElem];
}


extern "C" {static void *copy_QSysInfo(const void *, SIP_SSIZE_T);}
static void *copy_QSysInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSysInfo(reinterpret_cast<const  ::QSysInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSysInfo(sipSimpleWrapper *);}
static void dealloc_QSysInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSysInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSysInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSysInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSysInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QSysInfo();

            return sipCpp;
        }
    }

    {
        const  ::QSysInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSysInfo, &a0))
        {
            sipCpp = new  ::QSysInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSysInfo[] = {
    {SIP_MLNAME_CAST(sipName_buildAbi), meth_QSysInfo_buildAbi, METH_VARARGS, SIP_MLDOC_CAST(doc_QSysInfo_buildAbi)},
    {SIP_MLNAME_CAST(sipName_buildCpuArchitecture), meth_QSysInfo_buildCpuArchitecture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSysInfo_buildCpuArchitecture)},
    {SIP_MLNAME_CAST(sipName_currentCpuArchitecture), meth_QSysInfo_currentCpuArchitecture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSysInfo_currentCpuArchitecture)},
    {SIP_MLNAME_CAST(sipName_kernelType), meth_QSysInfo_kernelType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSysInfo_kernelType)},
    {SIP_MLNAME_CAST(sipName_kernelVersion), meth_QSysInfo_kernelVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QSysInfo_kernelVersion)},
    {SIP_MLNAME_CAST(sipName_machineHostName), meth_QSysInfo_machineHostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSysInfo_machineHostName)},
    {SIP_MLNAME_CAST(sipName_prettyProductName), meth_QSysInfo_prettyProductName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSysInfo_prettyProductName)},
    {SIP_MLNAME_CAST(sipName_productType), meth_QSysInfo_productType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSysInfo_productType)},
    {SIP_MLNAME_CAST(sipName_productVersion), meth_QSysInfo_productVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QSysInfo_productVersion)}
};

static sipEnumMemberDef enummembers_QSysInfo[] = {
    {sipName_BigEndian, static_cast<int>( ::QSysInfo::BigEndian), 238},
    {sipName_ByteOrder, static_cast<int>( ::QSysInfo::ByteOrder), 238},
    {sipName_LittleEndian, static_cast<int>( ::QSysInfo::LittleEndian), 238},
    {sipName_WordSize, static_cast<int>( ::QSysInfo::WordSize), 239},
};

PyDoc_STRVAR(doc_QSysInfo, "\1QSysInfo()\n"
"QSysInfo(QSysInfo)");


static pyqt5ClassPluginDef plugin_QSysInfo = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QSysInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSysInfo,
        {0},
        &plugin_QSysInfo
    },
    {
        sipNameNr_QSysInfo,
        {0, 0, 1},
        9, methods_QSysInfo,
        4, enummembers_QSysInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSysInfo,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSysInfo,
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
    dealloc_QSysInfo,
    assign_QSysInfo,
    array_QSysInfo,
    copy_QSysInfo,
    release_QSysInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
