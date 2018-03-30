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

#line 34 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qrgba64.sip"
#include <qrgba64.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQRgba64.cpp"



PyDoc_STRVAR(doc_QRgba64_fromRgba64, "fromRgba64(int) -> QRgba64\n"
"fromRgba64(int, int, int, int) -> QRgba64");

extern "C" {static PyObject *meth_QRgba64_fromRgba64(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_fromRgba64(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::quint64 a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "o", &a0))
        {
             ::QRgba64*sipRes;

            sipRes = new  ::QRgba64( ::QRgba64::fromRgba64(a0));

            return sipConvertFromNewType(sipRes,sipType_QRgba64,NULL);
        }
    }

    {
         ::quint16 a0;
         ::quint16 a1;
         ::quint16 a2;
         ::quint16 a3;

        if (sipParseArgs(&sipParseErr, sipArgs, "tttt", &a0, &a1, &a2, &a3))
        {
             ::QRgba64*sipRes;

            sipRes = new  ::QRgba64( ::QRgba64::fromRgba64(a0,a1,a2,a3));

            return sipConvertFromNewType(sipRes,sipType_QRgba64,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_fromRgba64, doc_QRgba64_fromRgba64);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_fromRgba, "fromRgba(int, int, int, int) -> QRgba64");

extern "C" {static PyObject *meth_QRgba64_fromRgba(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_fromRgba(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::quint8 a0;
         ::quint8 a1;
         ::quint8 a2;
         ::quint8 a3;

        if (sipParseArgs(&sipParseErr, sipArgs, "MMMM", &a0, &a1, &a2, &a3))
        {
             ::QRgba64*sipRes;

            sipRes = new  ::QRgba64( ::QRgba64::fromRgba(a0,a1,a2,a3));

            return sipConvertFromNewType(sipRes,sipType_QRgba64,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_fromRgba, doc_QRgba64_fromRgba);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_fromArgb32, "fromArgb32(int) -> QRgba64");

extern "C" {static PyObject *meth_QRgba64_fromArgb32(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_fromArgb32(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::uint a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "u", &a0))
        {
             ::QRgba64*sipRes;

            sipRes = new  ::QRgba64( ::QRgba64::fromArgb32(a0));

            return sipConvertFromNewType(sipRes,sipType_QRgba64,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_fromArgb32, doc_QRgba64_fromArgb32);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_isOpaque, "isOpaque(self) -> bool");

extern "C" {static PyObject *meth_QRgba64_isOpaque(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_isOpaque(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isOpaque();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_isOpaque, doc_QRgba64_isOpaque);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_isTransparent, "isTransparent(self) -> bool");

extern "C" {static PyObject *meth_QRgba64_isTransparent(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_isTransparent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isTransparent();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_isTransparent, doc_QRgba64_isTransparent);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_red, "red(self) -> int");

extern "C" {static PyObject *meth_QRgba64_red(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_red(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->red();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_red, doc_QRgba64_red);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_green, "green(self) -> int");

extern "C" {static PyObject *meth_QRgba64_green(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_green(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->green();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_green, doc_QRgba64_green);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_blue, "blue(self) -> int");

extern "C" {static PyObject *meth_QRgba64_blue(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_blue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->blue();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_blue, doc_QRgba64_blue);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_alpha, "alpha(self) -> int");

extern "C" {static PyObject *meth_QRgba64_alpha(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_alpha(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->alpha();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_alpha, doc_QRgba64_alpha);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_setRed, "setRed(self, int)");

extern "C" {static PyObject *meth_QRgba64_setRed(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_setRed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::quint16 a0;
         ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_QRgba64, &sipCpp, &a0))
        {
            sipCpp->setRed(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_setRed, doc_QRgba64_setRed);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_setGreen, "setGreen(self, int)");

extern "C" {static PyObject *meth_QRgba64_setGreen(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_setGreen(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::quint16 a0;
         ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_QRgba64, &sipCpp, &a0))
        {
            sipCpp->setGreen(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_setGreen, doc_QRgba64_setGreen);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_setBlue, "setBlue(self, int)");

extern "C" {static PyObject *meth_QRgba64_setBlue(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_setBlue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::quint16 a0;
         ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_QRgba64, &sipCpp, &a0))
        {
            sipCpp->setBlue(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_setBlue, doc_QRgba64_setBlue);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_setAlpha, "setAlpha(self, int)");

extern "C" {static PyObject *meth_QRgba64_setAlpha(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_setAlpha(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::quint16 a0;
         ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_QRgba64, &sipCpp, &a0))
        {
            sipCpp->setAlpha(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_setAlpha, doc_QRgba64_setAlpha);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_red8, "red8(self) -> int");

extern "C" {static PyObject *meth_QRgba64_red8(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_red8(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::quint8 sipRes;

            sipRes = sipCpp->red8();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_red8, doc_QRgba64_red8);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_green8, "green8(self) -> int");

extern "C" {static PyObject *meth_QRgba64_green8(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_green8(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::quint8 sipRes;

            sipRes = sipCpp->green8();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_green8, doc_QRgba64_green8);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_blue8, "blue8(self) -> int");

extern "C" {static PyObject *meth_QRgba64_blue8(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_blue8(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::quint8 sipRes;

            sipRes = sipCpp->blue8();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_blue8, doc_QRgba64_blue8);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_alpha8, "alpha8(self) -> int");

extern "C" {static PyObject *meth_QRgba64_alpha8(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_alpha8(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::quint8 sipRes;

            sipRes = sipCpp->alpha8();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_alpha8, doc_QRgba64_alpha8);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_toArgb32, "toArgb32(self) -> int");

extern "C" {static PyObject *meth_QRgba64_toArgb32(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_toArgb32(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::uint sipRes;

            sipRes = sipCpp->toArgb32();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_toArgb32, doc_QRgba64_toArgb32);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_toRgb16, "toRgb16(self) -> int");

extern "C" {static PyObject *meth_QRgba64_toRgb16(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_toRgb16(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::ushort sipRes;

            sipRes = sipCpp->toRgb16();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_toRgb16, doc_QRgba64_toRgb16);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_premultiplied, "premultiplied(self) -> QRgba64");

extern "C" {static PyObject *meth_QRgba64_premultiplied(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_premultiplied(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::QRgba64*sipRes;

            sipRes = new  ::QRgba64(sipCpp->premultiplied());

            return sipConvertFromNewType(sipRes,sipType_QRgba64,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_premultiplied, doc_QRgba64_premultiplied);

    return NULL;
}


PyDoc_STRVAR(doc_QRgba64_unpremultiplied, "unpremultiplied(self) -> QRgba64");

extern "C" {static PyObject *meth_QRgba64_unpremultiplied(PyObject *, PyObject *);}
static PyObject *meth_QRgba64_unpremultiplied(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRgba64 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRgba64, &sipCpp))
        {
             ::QRgba64*sipRes;

            sipRes = new  ::QRgba64(sipCpp->unpremultiplied());

            return sipConvertFromNewType(sipRes,sipType_QRgba64,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRgba64, sipName_unpremultiplied, doc_QRgba64_unpremultiplied);

    return NULL;
}


extern "C" {static PyObject *slot_QRgba64___long__(PyObject *);}
static PyObject *slot_QRgba64___long__(PyObject *sipSelf)
{
     ::QRgba64 *sipCpp = reinterpret_cast< ::QRgba64 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRgba64));

    if (!sipCpp)
        return 0;


    {
        {
             ::quint64 sipRes;

            sipRes = *sipCpp;

            return PyLong_FromUnsignedLongLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRgba64(void *, int);}
static void release_QRgba64(void *sipCppV, int)
{
    delete reinterpret_cast< ::QRgba64 *>(sipCppV);
}


extern "C" {static void assign_QRgba64(void *, SIP_SSIZE_T, void *);}
static void assign_QRgba64(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QRgba64 *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QRgba64 *>(sipSrc);
}


extern "C" {static void *array_QRgba64(SIP_SSIZE_T);}
static void *array_QRgba64(SIP_SSIZE_T sipNrElem)
{
    return new  ::QRgba64[sipNrElem];
}


extern "C" {static void *copy_QRgba64(const void *, SIP_SSIZE_T);}
static void *copy_QRgba64(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QRgba64(reinterpret_cast<const  ::QRgba64 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRgba64(sipSimpleWrapper *);}
static void dealloc_QRgba64(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRgba64(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QRgba64(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRgba64(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QRgba64 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QRgba64();

            return sipCpp;
        }
    }

    {
        const  ::QRgba64* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRgba64, &a0))
        {
            sipCpp = new  ::QRgba64(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRgba64[] = {
#if PY_MAJOR_VERSION < 3
    {(void *)slot_QRgba64___long__, long_slot},
#else
    {(void *)slot_QRgba64___long__, int_slot},
#endif
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QRgba64[] = {
    {SIP_MLNAME_CAST(sipName_alpha), meth_QRgba64_alpha, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_alpha)},
    {SIP_MLNAME_CAST(sipName_alpha8), meth_QRgba64_alpha8, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_alpha8)},
    {SIP_MLNAME_CAST(sipName_blue), meth_QRgba64_blue, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_blue)},
    {SIP_MLNAME_CAST(sipName_blue8), meth_QRgba64_blue8, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_blue8)},
    {SIP_MLNAME_CAST(sipName_fromArgb32), meth_QRgba64_fromArgb32, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_fromArgb32)},
    {SIP_MLNAME_CAST(sipName_fromRgba), meth_QRgba64_fromRgba, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_fromRgba)},
    {SIP_MLNAME_CAST(sipName_fromRgba64), meth_QRgba64_fromRgba64, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_fromRgba64)},
    {SIP_MLNAME_CAST(sipName_green), meth_QRgba64_green, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_green)},
    {SIP_MLNAME_CAST(sipName_green8), meth_QRgba64_green8, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_green8)},
    {SIP_MLNAME_CAST(sipName_isOpaque), meth_QRgba64_isOpaque, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_isOpaque)},
    {SIP_MLNAME_CAST(sipName_isTransparent), meth_QRgba64_isTransparent, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_isTransparent)},
    {SIP_MLNAME_CAST(sipName_premultiplied), meth_QRgba64_premultiplied, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_premultiplied)},
    {SIP_MLNAME_CAST(sipName_red), meth_QRgba64_red, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_red)},
    {SIP_MLNAME_CAST(sipName_red8), meth_QRgba64_red8, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_red8)},
    {SIP_MLNAME_CAST(sipName_setAlpha), meth_QRgba64_setAlpha, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_setAlpha)},
    {SIP_MLNAME_CAST(sipName_setBlue), meth_QRgba64_setBlue, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_setBlue)},
    {SIP_MLNAME_CAST(sipName_setGreen), meth_QRgba64_setGreen, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_setGreen)},
    {SIP_MLNAME_CAST(sipName_setRed), meth_QRgba64_setRed, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_setRed)},
    {SIP_MLNAME_CAST(sipName_toArgb32), meth_QRgba64_toArgb32, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_toArgb32)},
    {SIP_MLNAME_CAST(sipName_toRgb16), meth_QRgba64_toRgb16, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_toRgb16)},
    {SIP_MLNAME_CAST(sipName_unpremultiplied), meth_QRgba64_unpremultiplied, METH_VARARGS, SIP_MLDOC_CAST(doc_QRgba64_unpremultiplied)}
};

PyDoc_STRVAR(doc_QRgba64, "\1QRgba64()\n"
"QRgba64(QRgba64)");


static pyqt5ClassPluginDef plugin_QRgba64 = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QRgba64 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QRgba64,
        {0},
        &plugin_QRgba64
    },
    {
        sipNameNr_QRgba64,
        {0, 0, 1},
        21, methods_QRgba64,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRgba64,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QRgba64,
    init_type_QRgba64,
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
    dealloc_QRgba64,
    assign_QRgba64,
    array_QRgba64,
    copy_QRgba64,
    release_QRgba64,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
