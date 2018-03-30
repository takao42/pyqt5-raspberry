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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpicture.sip"
#include <qpicture.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPicture.cpp"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPicture.cpp"
#line 52 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPicture.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPicture.cpp"
#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPicture.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPicture.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPicture.cpp"


class sipQPicture : public  ::QPicture
{
public:
    sipQPicture(int);
    sipQPicture(const  ::QPicture&);
    virtual ~sipQPicture();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setData(const char*,uint);
    int devType() const;
     ::QPaintEngine* paintEngine() const;
    int metric( ::QPaintDevice::PaintDeviceMetric) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPicture(const sipQPicture &);
    sipQPicture &operator = (const sipQPicture &);

    char sipPyMethods[4];
};

sipQPicture::sipQPicture(int a0):  ::QPicture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPicture::sipQPicture(const  ::QPicture& a0):  ::QPicture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPicture::~sipQPicture()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipQPicture::setData(const char*a0,uint a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_setData);

    if (!sipMeth)
    {
         ::QPicture::setData(a0,a1);
        return;
    }

    extern void sipVH_QtGui_75(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*,uint);

    sipVH_QtGui_75(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

int sipQPicture::devType() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_devType);

    if (!sipMeth)
        return  ::QPicture::devType();

    extern int sipVH_QtGui_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_8(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QPaintEngine* sipQPicture::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_paintEngine);

    if (!sipMeth)
        return  ::QPicture::paintEngine();

    extern  ::QPaintEngine* sipVH_QtGui_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_17(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

int sipQPicture::metric( ::QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_metric);

    if (!sipMeth)
        return  ::QPicture::metric(a0);

    extern int sipVH_QtGui_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QPaintDevice::PaintDeviceMetric);

    return sipVH_QtGui_18(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QPicture_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QPicture_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPicture_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_isNull, doc_QPicture_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_devType, "devType(self) -> int");

extern "C" {static PyObject *meth_QPicture_devType(PyObject *, PyObject *);}
static PyObject *meth_QPicture_devType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QPicture::devType() : sipCpp->devType());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_devType, doc_QPicture_devType);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_size, "size(self) -> int");

extern "C" {static PyObject *meth_QPicture_size(PyObject *, PyObject *);}
static PyObject *meth_QPicture_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
             ::uint sipRes;

            sipRes = sipCpp->size();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_size, doc_QPicture_size);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_data, "data(self) -> str");

extern "C" {static PyObject *meth_QPicture_data(PyObject *, PyObject *);}
static PyObject *meth_QPicture_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->data();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_data, doc_QPicture_data);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_setData, "setData(self, bytes)");

extern "C" {static PyObject *meth_QPicture_setData(PyObject *, PyObject *);}
static PyObject *meth_QPicture_setData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const char* a0;
        SIP_SSIZE_T a1;
         ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bk", &sipSelf, sipType_QPicture, &sipCpp, &a0, &a1))
        {
            (sipSelfWasArg ? sipCpp-> ::QPicture::setData(a0,(uint)a1) : sipCpp->setData(a0,(uint)a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_setData, doc_QPicture_setData);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_play, "play(self, QPainter) -> bool");

extern "C" {static PyObject *meth_QPicture_play(PyObject *, PyObject *);}
static PyObject *meth_QPicture_play(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPainter* a0;
         ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QPicture, &sipCpp, sipType_QPainter, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->play(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_play, doc_QPicture_play);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_load, "load(self, QIODevice, format: str = None) -> bool\n"
"load(self, str, format: str = None) -> bool");

extern "C" {static PyObject *meth_QPicture_load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPicture_load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::QIODevice* a0;
        const char* a1 = 0;
        PyObject *a1Keep = 0;
         ::QPicture *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|AA", &sipSelf, sipType_QPicture, &sipCpp, sipType_QIODevice, &a0, &a1Keep, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load(a0,a1);
            Py_END_ALLOW_THREADS
            Py_XDECREF(a1Keep);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const char* a1 = 0;
        PyObject *a1Keep = 0;
         ::QPicture *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|AA", &sipSelf, sipType_QPicture, &sipCpp, sipType_QString,&a0, &a0State, &a1Keep, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            Py_XDECREF(a1Keep);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_load, doc_QPicture_load);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_save, "save(self, QIODevice, format: str = None) -> bool\n"
"save(self, str, format: str = None) -> bool");

extern "C" {static PyObject *meth_QPicture_save(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPicture_save(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::QIODevice* a0;
        const char* a1 = 0;
        PyObject *a1Keep = 0;
         ::QPicture *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|AA", &sipSelf, sipType_QPicture, &sipCpp, sipType_QIODevice, &a0, &a1Keep, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->save(a0,a1);
            Py_END_ALLOW_THREADS
            Py_XDECREF(a1Keep);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const char* a1 = 0;
        PyObject *a1Keep = 0;
         ::QPicture *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|AA", &sipSelf, sipType_QPicture, &sipCpp, sipType_QString,&a0, &a0State, &a1Keep, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->save(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            Py_XDECREF(a1Keep);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_save, doc_QPicture_save);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_boundingRect, "boundingRect(self) -> QRect");

extern "C" {static PyObject *meth_QPicture_boundingRect(PyObject *, PyObject *);}
static PyObject *meth_QPicture_boundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
             ::QRect*sipRes;

            sipRes = new  ::QRect(sipCpp->boundingRect());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_boundingRect, doc_QPicture_boundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_setBoundingRect, "setBoundingRect(self, QRect)");

extern "C" {static PyObject *meth_QPicture_setBoundingRect(PyObject *, PyObject *);}
static PyObject *meth_QPicture_setBoundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRect* a0;
         ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPicture, &sipCpp, sipType_QRect, &a0))
        {
            sipCpp->setBoundingRect(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_setBoundingRect, doc_QPicture_setBoundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_detach, "detach(self)");

extern "C" {static PyObject *meth_QPicture_detach(PyObject *, PyObject *);}
static PyObject *meth_QPicture_detach(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            sipCpp->detach();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_detach, doc_QPicture_detach);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_isDetached, "isDetached(self) -> bool");

extern "C" {static PyObject *meth_QPicture_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QPicture_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDetached();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_isDetached, doc_QPicture_isDetached);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_paintEngine, "paintEngine(self) -> QPaintEngine");

extern "C" {static PyObject *meth_QPicture_paintEngine(PyObject *, PyObject *);}
static PyObject *meth_QPicture_paintEngine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPicture, &sipCpp))
        {
             ::QPaintEngine*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QPicture::paintEngine() : sipCpp->paintEngine());

            return sipConvertFromType(sipRes,sipType_QPaintEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_paintEngine, doc_QPicture_paintEngine);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_metric, "metric(self, QPaintDevice.PaintDeviceMetric) -> int");

extern "C" {static PyObject *meth_QPicture_metric(PyObject *, PyObject *);}
static PyObject *meth_QPicture_metric(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QPaintDevice::PaintDeviceMetric a0;
        const  ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pE", &sipSelf, sipType_QPicture, &sipCpp, sipType_QPaintDevice_PaintDeviceMetric, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QPicture::metric(a0) : sipCpp->metric(a0));

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_metric, doc_QPicture_metric);

    return NULL;
}


PyDoc_STRVAR(doc_QPicture_swap, "swap(self, QPicture)");

extern "C" {static PyObject *meth_QPicture_swap(PyObject *, PyObject *);}
static PyObject *meth_QPicture_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPicture* a0;
         ::QPicture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPicture, &sipCpp, sipType_QPicture, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPicture, sipName_swap, doc_QPicture_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPicture(void *, const sipTypeDef *);}
static void *cast_QPicture(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPicture *sipCpp = reinterpret_cast< ::QPicture *>(sipCppV);

    if (targetType == sipType_QPaintDevice)
        return static_cast< ::QPaintDevice *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPicture(void *, int);}
static void release_QPicture(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPicture *>(sipCppV);
    else
        delete reinterpret_cast< ::QPicture *>(sipCppV);
}


extern "C" {static void assign_QPicture(void *, SIP_SSIZE_T, void *);}
static void assign_QPicture(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPicture *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPicture *>(sipSrc);
}


extern "C" {static void *array_QPicture(SIP_SSIZE_T);}
static void *array_QPicture(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPicture[sipNrElem];
}


extern "C" {static void *copy_QPicture(const void *, SIP_SSIZE_T);}
static void *copy_QPicture(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPicture(reinterpret_cast<const  ::QPicture *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPicture(sipSimpleWrapper *);}
static void dealloc_QPicture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPicture *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPicture(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPicture(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPicture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPicture *sipCpp = 0;

    {
        int a0 = -1;

        static const char *sipKwdList[] = {
            sipName_formatVersion,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|i", &a0))
        {
            sipCpp = new sipQPicture(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QPicture* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPicture, &a0))
        {
            sipCpp = new sipQPicture(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPicture[] = {{186, 255, 1}};


static PyMethodDef methods_QPicture[] = {
    {SIP_MLNAME_CAST(sipName_boundingRect), meth_QPicture_boundingRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_boundingRect)},
    {SIP_MLNAME_CAST(sipName_data), meth_QPicture_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_data)},
    {SIP_MLNAME_CAST(sipName_detach), meth_QPicture_detach, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_detach)},
    {SIP_MLNAME_CAST(sipName_devType), meth_QPicture_devType, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_devType)},
    {SIP_MLNAME_CAST(sipName_isDetached), meth_QPicture_isDetached, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_isDetached)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QPicture_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_isNull)},
    {SIP_MLNAME_CAST(sipName_load), (PyCFunction)meth_QPicture_load, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPicture_load)},
    {SIP_MLNAME_CAST(sipName_metric), meth_QPicture_metric, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_metric)},
    {SIP_MLNAME_CAST(sipName_paintEngine), meth_QPicture_paintEngine, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_paintEngine)},
    {SIP_MLNAME_CAST(sipName_play), meth_QPicture_play, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_play)},
    {SIP_MLNAME_CAST(sipName_save), (PyCFunction)meth_QPicture_save, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPicture_save)},
    {SIP_MLNAME_CAST(sipName_setBoundingRect), meth_QPicture_setBoundingRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_setBoundingRect)},
    {SIP_MLNAME_CAST(sipName_setData), meth_QPicture_setData, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_setData)},
    {SIP_MLNAME_CAST(sipName_size), meth_QPicture_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_size)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QPicture_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QPicture_swap)}
};

PyDoc_STRVAR(doc_QPicture, "\1QPicture(formatVersion: int = -1)\n"
"QPicture(QPicture)");


static pyqt5ClassPluginDef plugin_QPicture = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QPicture = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPicture,
        {0},
        &plugin_QPicture
    },
    {
        sipNameNr_QPicture,
        {0, 0, 1},
        15, methods_QPicture,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPicture,
    -1,
    -1,
    supers_QPicture,
    0,
    init_type_QPicture,
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
    dealloc_QPicture,
    assign_QPicture,
    array_QPicture,
    copy_QPicture,
    release_QPicture,
    cast_QPicture,
    0,
    0,
    0,
    0,
    0,
    0
};
