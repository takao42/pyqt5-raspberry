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

#line 28 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qopenglbuffer.sip"
#include <qopenglbuffer.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQOpenGLBuffer.cpp"

#line 28 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qopenglbuffer.sip"
#include <qopenglbuffer.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQOpenGLBuffer.cpp"


PyDoc_STRVAR(doc_QOpenGLBuffer_type, "type(self) -> QOpenGLBuffer.Type");

extern "C" {static PyObject *meth_QOpenGLBuffer_type(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
             ::QOpenGLBuffer::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QOpenGLBuffer_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_type, doc_QOpenGLBuffer_type);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_usagePattern, "usagePattern(self) -> QOpenGLBuffer.UsagePattern");

extern "C" {static PyObject *meth_QOpenGLBuffer_usagePattern(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_usagePattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
             ::QOpenGLBuffer::UsagePattern sipRes;

            sipRes = sipCpp->usagePattern();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QOpenGLBuffer_UsagePattern);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_usagePattern, doc_QOpenGLBuffer_usagePattern);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_setUsagePattern, "setUsagePattern(self, QOpenGLBuffer.UsagePattern)");

extern "C" {static PyObject *meth_QOpenGLBuffer_setUsagePattern(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_setUsagePattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLBuffer::UsagePattern a0;
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QOpenGLBuffer, &sipCpp, sipType_QOpenGLBuffer_UsagePattern, &a0))
        {
            sipCpp->setUsagePattern(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_setUsagePattern, doc_QOpenGLBuffer_setUsagePattern);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_create, "create(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLBuffer_create(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->create();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_create, doc_QOpenGLBuffer_create);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_isCreated, "isCreated(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLBuffer_isCreated(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_isCreated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCreated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_isCreated, doc_QOpenGLBuffer_isCreated);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_destroy, "destroy(self)");

extern "C" {static PyObject *meth_QOpenGLBuffer_destroy(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
            sipCpp->destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_destroy, doc_QOpenGLBuffer_destroy);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_bind, "bind(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLBuffer_bind(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_bind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->bind();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_bind, doc_QOpenGLBuffer_bind);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_release, "release(self)\n"
"release(QOpenGLBuffer.Type)");

extern "C" {static PyObject *meth_QOpenGLBuffer_release(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
            sipCpp->release();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::QOpenGLBuffer::Type a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QOpenGLBuffer_Type, &a0))
        {
             ::QOpenGLBuffer::release(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_release, doc_QOpenGLBuffer_release);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_bufferId, "bufferId(self) -> int");

extern "C" {static PyObject *meth_QOpenGLBuffer_bufferId(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_bufferId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
             ::GLuint sipRes;

            sipRes = sipCpp->bufferId();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_bufferId, doc_QOpenGLBuffer_bufferId);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_size, "size(self) -> int");

extern "C" {static PyObject *meth_QOpenGLBuffer_size(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->size();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_size, doc_QOpenGLBuffer_size);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_read, "read(self, int, sip.voidptr, int) -> bool");

extern "C" {static PyObject *meth_QOpenGLBuffer_read(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        void* a1;
        int a2;
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bivi", &sipSelf, sipType_QOpenGLBuffer, &sipCpp, &a0, &a1, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->read(a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_read, doc_QOpenGLBuffer_read);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_write, "write(self, int, sip.voidptr, int)");

extern "C" {static PyObject *meth_QOpenGLBuffer_write(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const void* a1;
        int a2;
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bivi", &sipSelf, sipType_QOpenGLBuffer, &sipCpp, &a0, &a1, &a2))
        {
            sipCpp->write(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_write, doc_QOpenGLBuffer_write);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_allocate, "allocate(self, sip.voidptr, int)\n"
"allocate(self, int)");

extern "C" {static PyObject *meth_QOpenGLBuffer_allocate(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_allocate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const void* a0;
        int a1;
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bvi", &sipSelf, sipType_QOpenGLBuffer, &sipCpp, &a0, &a1))
        {
            sipCpp->allocate(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLBuffer, &sipCpp, &a0))
        {
            sipCpp->allocate(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_allocate, doc_QOpenGLBuffer_allocate);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_map, "map(self, QOpenGLBuffer.Access) -> sip.voidptr");

extern "C" {static PyObject *meth_QOpenGLBuffer_map(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_map(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLBuffer::Access a0;
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QOpenGLBuffer, &sipCpp, sipType_QOpenGLBuffer_Access, &a0))
        {
            void*sipRes;

            sipRes = sipCpp->map(a0);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_map, doc_QOpenGLBuffer_map);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_unmap, "unmap(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLBuffer_unmap(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_unmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLBuffer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->unmap();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_unmap, doc_QOpenGLBuffer_unmap);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLBuffer_mapRange, "mapRange(self, int, int, Union[QOpenGLBuffer.RangeAccessFlags, QOpenGLBuffer.RangeAccessFlag]) -> sip.voidptr");

extern "C" {static PyObject *meth_QOpenGLBuffer_mapRange(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLBuffer_mapRange(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
         ::QOpenGLBuffer::RangeAccessFlags* a2;
        int a2State = 0;
         ::QOpenGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiiJ1", &sipSelf, sipType_QOpenGLBuffer, &sipCpp, &a0, &a1, sipType_QOpenGLBuffer_RangeAccessFlags, &a2, &a2State))
        {
            void*sipRes;

            sipRes = sipCpp->mapRange(a0,a1,*a2);
            sipReleaseType(a2,sipType_QOpenGLBuffer_RangeAccessFlags,a2State);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLBuffer, sipName_mapRange, doc_QOpenGLBuffer_mapRange);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QOpenGLBuffer___len__(PyObject *);}
static SIP_SSIZE_T slot_QOpenGLBuffer___len__(PyObject *sipSelf)
{
     ::QOpenGLBuffer *sipCpp = reinterpret_cast< ::QOpenGLBuffer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLBuffer));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->size();
#line 538 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQOpenGLBuffer.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLBuffer(void *, int);}
static void release_QOpenGLBuffer(void *sipCppV, int)
{
    delete reinterpret_cast< ::QOpenGLBuffer *>(sipCppV);
}


extern "C" {static void assign_QOpenGLBuffer(void *, SIP_SSIZE_T, void *);}
static void assign_QOpenGLBuffer(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QOpenGLBuffer *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QOpenGLBuffer *>(sipSrc);
}


extern "C" {static void *array_QOpenGLBuffer(SIP_SSIZE_T);}
static void *array_QOpenGLBuffer(SIP_SSIZE_T sipNrElem)
{
    return new  ::QOpenGLBuffer[sipNrElem];
}


extern "C" {static void *copy_QOpenGLBuffer(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLBuffer(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QOpenGLBuffer(reinterpret_cast<const  ::QOpenGLBuffer *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLBuffer(sipSimpleWrapper *);}
static void dealloc_QOpenGLBuffer(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLBuffer(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QOpenGLBuffer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLBuffer(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QOpenGLBuffer *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QOpenGLBuffer();

            return sipCpp;
        }
    }

    {
         ::QOpenGLBuffer::Type a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QOpenGLBuffer_Type, &a0))
        {
            sipCpp = new  ::QOpenGLBuffer(a0);

            return sipCpp;
        }
    }

    {
        const  ::QOpenGLBuffer* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QOpenGLBuffer, &a0))
        {
            sipCpp = new  ::QOpenGLBuffer(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLBuffer[] = {
    {(void *)slot_QOpenGLBuffer___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QOpenGLBuffer[] = {
    {SIP_MLNAME_CAST(sipName_allocate), meth_QOpenGLBuffer_allocate, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_allocate)},
    {SIP_MLNAME_CAST(sipName_bind), meth_QOpenGLBuffer_bind, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_bind)},
    {SIP_MLNAME_CAST(sipName_bufferId), meth_QOpenGLBuffer_bufferId, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_bufferId)},
    {SIP_MLNAME_CAST(sipName_create), meth_QOpenGLBuffer_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_create)},
    {SIP_MLNAME_CAST(sipName_destroy), meth_QOpenGLBuffer_destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_destroy)},
    {SIP_MLNAME_CAST(sipName_isCreated), meth_QOpenGLBuffer_isCreated, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_isCreated)},
    {SIP_MLNAME_CAST(sipName_map), meth_QOpenGLBuffer_map, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_map)},
    {SIP_MLNAME_CAST(sipName_mapRange), meth_QOpenGLBuffer_mapRange, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_mapRange)},
    {SIP_MLNAME_CAST(sipName_read), meth_QOpenGLBuffer_read, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_read)},
    {SIP_MLNAME_CAST(sipName_release), meth_QOpenGLBuffer_release, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_release)},
    {SIP_MLNAME_CAST(sipName_setUsagePattern), meth_QOpenGLBuffer_setUsagePattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_setUsagePattern)},
    {SIP_MLNAME_CAST(sipName_size), meth_QOpenGLBuffer_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_size)},
    {SIP_MLNAME_CAST(sipName_type), meth_QOpenGLBuffer_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_type)},
    {SIP_MLNAME_CAST(sipName_unmap), meth_QOpenGLBuffer_unmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_unmap)},
    {SIP_MLNAME_CAST(sipName_usagePattern), meth_QOpenGLBuffer_usagePattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_usagePattern)},
    {SIP_MLNAME_CAST(sipName_write), meth_QOpenGLBuffer_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLBuffer_write)}
};

static sipEnumMemberDef enummembers_QOpenGLBuffer[] = {
    {sipName_DynamicCopy, static_cast<int>( ::QOpenGLBuffer::DynamicCopy), 128},
    {sipName_DynamicDraw, static_cast<int>( ::QOpenGLBuffer::DynamicDraw), 128},
    {sipName_DynamicRead, static_cast<int>( ::QOpenGLBuffer::DynamicRead), 128},
    {sipName_IndexBuffer, static_cast<int>( ::QOpenGLBuffer::IndexBuffer), 127},
    {sipName_PixelPackBuffer, static_cast<int>( ::QOpenGLBuffer::PixelPackBuffer), 127},
    {sipName_PixelUnpackBuffer, static_cast<int>( ::QOpenGLBuffer::PixelUnpackBuffer), 127},
    {sipName_RangeFlushExplicit, static_cast<int>( ::QOpenGLBuffer::RangeFlushExplicit), 125},
    {sipName_RangeInvalidate, static_cast<int>( ::QOpenGLBuffer::RangeInvalidate), 125},
    {sipName_RangeInvalidateBuffer, static_cast<int>( ::QOpenGLBuffer::RangeInvalidateBuffer), 125},
    {sipName_RangeRead, static_cast<int>( ::QOpenGLBuffer::RangeRead), 125},
    {sipName_RangeUnsynchronized, static_cast<int>( ::QOpenGLBuffer::RangeUnsynchronized), 125},
    {sipName_RangeWrite, static_cast<int>( ::QOpenGLBuffer::RangeWrite), 125},
    {sipName_ReadOnly, static_cast<int>( ::QOpenGLBuffer::ReadOnly), 124},
    {sipName_ReadWrite, static_cast<int>( ::QOpenGLBuffer::ReadWrite), 124},
    {sipName_StaticCopy, static_cast<int>( ::QOpenGLBuffer::StaticCopy), 128},
    {sipName_StaticDraw, static_cast<int>( ::QOpenGLBuffer::StaticDraw), 128},
    {sipName_StaticRead, static_cast<int>( ::QOpenGLBuffer::StaticRead), 128},
    {sipName_StreamCopy, static_cast<int>( ::QOpenGLBuffer::StreamCopy), 128},
    {sipName_StreamDraw, static_cast<int>( ::QOpenGLBuffer::StreamDraw), 128},
    {sipName_StreamRead, static_cast<int>( ::QOpenGLBuffer::StreamRead), 128},
    {sipName_VertexBuffer, static_cast<int>( ::QOpenGLBuffer::VertexBuffer), 127},
    {sipName_WriteOnly, static_cast<int>( ::QOpenGLBuffer::WriteOnly), 124},
};

PyDoc_STRVAR(doc_QOpenGLBuffer, "\1QOpenGLBuffer()\n"
"QOpenGLBuffer(QOpenGLBuffer.Type)\n"
"QOpenGLBuffer(QOpenGLBuffer)");


static pyqt5ClassPluginDef plugin_QOpenGLBuffer = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLBuffer = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLBuffer,
        {0},
        &plugin_QOpenGLBuffer
    },
    {
        sipNameNr_QOpenGLBuffer,
        {0, 0, 1},
        16, methods_QOpenGLBuffer,
        22, enummembers_QOpenGLBuffer,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLBuffer,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QOpenGLBuffer,
    init_type_QOpenGLBuffer,
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
    dealloc_QOpenGLBuffer,
    assign_QOpenGLBuffer,
    array_QOpenGLBuffer,
    copy_QOpenGLBuffer,
    release_QOpenGLBuffer,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
