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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qsurface.sip"
#include <qsurface.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQSurface.cpp"

#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQSurface.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qsurfaceformat.sip"
#include <qsurfaceformat.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQSurface.cpp"


PyDoc_STRVAR(doc_QSurface_surfaceClass, "surfaceClass(self) -> QSurface.SurfaceClass");

extern "C" {static PyObject *meth_QSurface_surfaceClass(PyObject *, PyObject *);}
static PyObject *meth_QSurface_surfaceClass(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSurface, &sipCpp))
        {
             ::QSurface::SurfaceClass sipRes;

            sipRes = sipCpp->surfaceClass();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QSurface_SurfaceClass);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSurface, sipName_surfaceClass, doc_QSurface_surfaceClass);

    return NULL;
}


PyDoc_STRVAR(doc_QSurface_format, "format(self) -> QSurfaceFormat");

extern "C" {static PyObject *meth_QSurface_format(PyObject *, PyObject *);}
static PyObject *meth_QSurface_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSurface, &sipCpp))
        {
             ::QSurfaceFormat*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSurface, sipName_format);
                return NULL;
            }

            sipRes = new  ::QSurfaceFormat(sipCpp->format());

            return sipConvertFromNewType(sipRes,sipType_QSurfaceFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSurface, sipName_format, doc_QSurface_format);

    return NULL;
}


PyDoc_STRVAR(doc_QSurface_surfaceType, "surfaceType(self) -> QSurface.SurfaceType");

extern "C" {static PyObject *meth_QSurface_surfaceType(PyObject *, PyObject *);}
static PyObject *meth_QSurface_surfaceType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSurface, &sipCpp))
        {
             ::QSurface::SurfaceType sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSurface, sipName_surfaceType);
                return NULL;
            }

            sipRes = sipCpp->surfaceType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QSurface_SurfaceType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSurface, sipName_surfaceType, doc_QSurface_surfaceType);

    return NULL;
}


PyDoc_STRVAR(doc_QSurface_size, "size(self) -> QSize");

extern "C" {static PyObject *meth_QSurface_size(PyObject *, PyObject *);}
static PyObject *meth_QSurface_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSurface, &sipCpp))
        {
             ::QSize*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSurface, sipName_size);
                return NULL;
            }

            sipRes = new  ::QSize(sipCpp->size());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSurface, sipName_size, doc_QSurface_size);

    return NULL;
}


PyDoc_STRVAR(doc_QSurface_supportsOpenGL, "supportsOpenGL(self) -> bool");

extern "C" {static PyObject *meth_QSurface_supportsOpenGL(PyObject *, PyObject *);}
static PyObject *meth_QSurface_supportsOpenGL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSurface, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->supportsOpenGL();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSurface, sipName_supportsOpenGL, doc_QSurface_supportsOpenGL);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSurface(void *, int);}
static void release_QSurface(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSurface *>(sipCppV);
}


extern "C" {static void dealloc_QSurface(sipSimpleWrapper *);}
static void dealloc_QSurface(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSurface(sipGetAddress(sipSelf), 0);
    }
}


static PyMethodDef methods_QSurface[] = {
    {SIP_MLNAME_CAST(sipName_format), meth_QSurface_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QSurface_format)},
    {SIP_MLNAME_CAST(sipName_size), meth_QSurface_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QSurface_size)},
    {SIP_MLNAME_CAST(sipName_supportsOpenGL), meth_QSurface_supportsOpenGL, METH_VARARGS, SIP_MLDOC_CAST(doc_QSurface_supportsOpenGL)},
    {SIP_MLNAME_CAST(sipName_surfaceClass), meth_QSurface_surfaceClass, METH_VARARGS, SIP_MLDOC_CAST(doc_QSurface_surfaceClass)},
    {SIP_MLNAME_CAST(sipName_surfaceType), meth_QSurface_surfaceType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSurface_surfaceType)}
};

static sipEnumMemberDef enummembers_QSurface[] = {
    {sipName_Offscreen, static_cast<int>( ::QSurface::Offscreen), 263},
    {sipName_OpenGLSurface, static_cast<int>( ::QSurface::OpenGLSurface), 264},
    {sipName_RasterGLSurface, static_cast<int>( ::QSurface::RasterGLSurface), 264},
    {sipName_RasterSurface, static_cast<int>( ::QSurface::RasterSurface), 264},
    {sipName_Window, static_cast<int>( ::QSurface::Window), 263},
};


static pyqt5ClassPluginDef plugin_QSurface = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QSurface = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSurface,
        {0},
        &plugin_QSurface
    },
    {
        sipNameNr_QSurface,
        {0, 0, 1},
        5, methods_QSurface,
        5, enummembers_QSurface,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QSurface,
    0,
    0,
    0,
    release_QSurface,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
