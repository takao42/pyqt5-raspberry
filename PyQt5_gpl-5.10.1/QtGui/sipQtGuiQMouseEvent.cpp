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

#line 205 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQMouseEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQMouseEvent.cpp"
#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQMouseEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQMouseEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQMouseEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQMouseEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQMouseEvent.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQMouseEvent.cpp"


class sipQMouseEvent : public  ::QMouseEvent
{
public:
    sipQMouseEvent( ::QEvent::Type,const  ::QPointF&, ::Qt::MouseButton, ::Qt::MouseButtons, ::Qt::KeyboardModifiers);
    sipQMouseEvent( ::QEvent::Type,const  ::QPointF&,const  ::QPointF&, ::Qt::MouseButton, ::Qt::MouseButtons, ::Qt::KeyboardModifiers);
    sipQMouseEvent( ::QEvent::Type,const  ::QPointF&,const  ::QPointF&,const  ::QPointF&, ::Qt::MouseButton, ::Qt::MouseButtons, ::Qt::KeyboardModifiers);
    sipQMouseEvent( ::QEvent::Type,const  ::QPointF&,const  ::QPointF&,const  ::QPointF&, ::Qt::MouseButton, ::Qt::MouseButtons, ::Qt::KeyboardModifiers, ::Qt::MouseEventSource);
    sipQMouseEvent(const  ::QMouseEvent&);
    ~sipQMouseEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMouseEvent(const sipQMouseEvent &);
    sipQMouseEvent &operator = (const sipQMouseEvent &);
};

sipQMouseEvent::sipQMouseEvent( ::QEvent::Type a0,const  ::QPointF& a1, ::Qt::MouseButton a2, ::Qt::MouseButtons a3, ::Qt::KeyboardModifiers a4):  ::QMouseEvent(a0,a1,a2,a3,a4), sipPySelf(0)
{
}

sipQMouseEvent::sipQMouseEvent( ::QEvent::Type a0,const  ::QPointF& a1,const  ::QPointF& a2, ::Qt::MouseButton a3, ::Qt::MouseButtons a4, ::Qt::KeyboardModifiers a5):  ::QMouseEvent(a0,a1,a2,a3,a4,a5), sipPySelf(0)
{
}

sipQMouseEvent::sipQMouseEvent( ::QEvent::Type a0,const  ::QPointF& a1,const  ::QPointF& a2,const  ::QPointF& a3, ::Qt::MouseButton a4, ::Qt::MouseButtons a5, ::Qt::KeyboardModifiers a6):  ::QMouseEvent(a0,a1,a2,a3,a4,a5,a6), sipPySelf(0)
{
}

sipQMouseEvent::sipQMouseEvent( ::QEvent::Type a0,const  ::QPointF& a1,const  ::QPointF& a2,const  ::QPointF& a3, ::Qt::MouseButton a4, ::Qt::MouseButtons a5, ::Qt::KeyboardModifiers a6, ::Qt::MouseEventSource a7):  ::QMouseEvent(a0,a1,a2,a3,a4,a5,a6,a7), sipPySelf(0)
{
}

sipQMouseEvent::sipQMouseEvent(const  ::QMouseEvent& a0):  ::QMouseEvent(a0), sipPySelf(0)
{
}

sipQMouseEvent::~sipQMouseEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QMouseEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QMouseEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_pos, doc_QMouseEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_globalPos, "globalPos(self) -> QPoint");

extern "C" {static PyObject *meth_QMouseEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(sipCpp->globalPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_globalPos, doc_QMouseEvent_globalPos);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_x, "x(self) -> int");

extern "C" {static PyObject *meth_QMouseEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_x, doc_QMouseEvent_x);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_y, "y(self) -> int");

extern "C" {static PyObject *meth_QMouseEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_y, doc_QMouseEvent_y);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_globalX, "globalX(self) -> int");

extern "C" {static PyObject *meth_QMouseEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalX();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_globalX, doc_QMouseEvent_globalX);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_globalY, "globalY(self) -> int");

extern "C" {static PyObject *meth_QMouseEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalY();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_globalY, doc_QMouseEvent_globalY);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_button, "button(self) -> Qt.MouseButton");

extern "C" {static PyObject *meth_QMouseEvent_button(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_button(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
             ::Qt::MouseButton sipRes;

            sipRes = sipCpp->button();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_MouseButton);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_button, doc_QMouseEvent_button);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_buttons, "buttons(self) -> Qt.MouseButtons");

extern "C" {static PyObject *meth_QMouseEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
             ::Qt::MouseButtons*sipRes;

            sipRes = new  ::Qt::MouseButtons(sipCpp->buttons());

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_buttons, doc_QMouseEvent_buttons);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_localPos, "localPos(self) -> QPointF");

extern "C" {static PyObject *meth_QMouseEvent_localPos(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_localPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->localPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_localPos, doc_QMouseEvent_localPos);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_windowPos, "windowPos(self) -> QPointF");

extern "C" {static PyObject *meth_QMouseEvent_windowPos(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_windowPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->windowPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_windowPos, doc_QMouseEvent_windowPos);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_screenPos, "screenPos(self) -> QPointF");

extern "C" {static PyObject *meth_QMouseEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->screenPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_screenPos, doc_QMouseEvent_screenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_source, "source(self) -> Qt.MouseEventSource");

extern "C" {static PyObject *meth_QMouseEvent_source(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
             ::Qt::MouseEventSource sipRes;

            sipRes = sipCpp->source();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_MouseEventSource);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_source, doc_QMouseEvent_source);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_flags, "flags(self) -> Qt.MouseEventFlags");

extern "C" {static PyObject *meth_QMouseEvent_flags(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
             ::Qt::MouseEventFlags*sipRes;

            sipRes = new  ::Qt::MouseEventFlags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseEventFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_flags, doc_QMouseEvent_flags);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QMouseEvent(void *, const sipTypeDef *);}
static void *cast_QMouseEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QMouseEvent *sipCpp = reinterpret_cast< ::QMouseEvent *>(sipCppV);

    if (targetType == sipType_QInputEvent)
        return static_cast< ::QInputEvent *>(sipCpp);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMouseEvent(void *, int);}
static void release_QMouseEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQMouseEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QMouseEvent *>(sipCppV);
}


extern "C" {static void dealloc_QMouseEvent(sipSimpleWrapper *);}
static void dealloc_QMouseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQMouseEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMouseEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QMouseEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMouseEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMouseEvent *sipCpp = 0;

    {
         ::QEvent::Type a0;
        const  ::QPointF* a1;
        int a1State = 0;
         ::Qt::MouseButton a2;
         ::Qt::MouseButtons* a3;
        int a3State = 0;
         ::Qt::KeyboardModifiers* a4;
        int a4State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ1EJ1J1", sipType_QEvent_Type, &a0, sipType_QPointF, &a1, &a1State, sipType_Qt_MouseButton, &a2, sipType_Qt_MouseButtons, &a3, &a3State, sipType_Qt_KeyboardModifiers, &a4, &a4State))
        {
            sipCpp = new sipQMouseEvent(a0,*a1,a2,*a3,*a4);
            sipReleaseType(const_cast< ::QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(a3,sipType_Qt_MouseButtons,a3State);
            sipReleaseType(a4,sipType_Qt_KeyboardModifiers,a4State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::QEvent::Type a0;
        const  ::QPointF* a1;
        int a1State = 0;
        const  ::QPointF* a2;
        int a2State = 0;
         ::Qt::MouseButton a3;
         ::Qt::MouseButtons* a4;
        int a4State = 0;
         ::Qt::KeyboardModifiers* a5;
        int a5State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ1J1EJ1J1", sipType_QEvent_Type, &a0, sipType_QPointF, &a1, &a1State, sipType_QPointF, &a2, &a2State, sipType_Qt_MouseButton, &a3, sipType_Qt_MouseButtons, &a4, &a4State, sipType_Qt_KeyboardModifiers, &a5, &a5State))
        {
            sipCpp = new sipQMouseEvent(a0,*a1,*a2,a3,*a4,*a5);
            sipReleaseType(const_cast< ::QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(const_cast< ::QPointF *>(a2),sipType_QPointF,a2State);
            sipReleaseType(a4,sipType_Qt_MouseButtons,a4State);
            sipReleaseType(a5,sipType_Qt_KeyboardModifiers,a5State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::QEvent::Type a0;
        const  ::QPointF* a1;
        int a1State = 0;
        const  ::QPointF* a2;
        int a2State = 0;
        const  ::QPointF* a3;
        int a3State = 0;
         ::Qt::MouseButton a4;
         ::Qt::MouseButtons* a5;
        int a5State = 0;
         ::Qt::KeyboardModifiers* a6;
        int a6State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ1J1J1EJ1J1", sipType_QEvent_Type, &a0, sipType_QPointF, &a1, &a1State, sipType_QPointF, &a2, &a2State, sipType_QPointF, &a3, &a3State, sipType_Qt_MouseButton, &a4, sipType_Qt_MouseButtons, &a5, &a5State, sipType_Qt_KeyboardModifiers, &a6, &a6State))
        {
            sipCpp = new sipQMouseEvent(a0,*a1,*a2,*a3,a4,*a5,*a6);
            sipReleaseType(const_cast< ::QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(const_cast< ::QPointF *>(a2),sipType_QPointF,a2State);
            sipReleaseType(const_cast< ::QPointF *>(a3),sipType_QPointF,a3State);
            sipReleaseType(a5,sipType_Qt_MouseButtons,a5State);
            sipReleaseType(a6,sipType_Qt_KeyboardModifiers,a6State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::QEvent::Type a0;
        const  ::QPointF* a1;
        int a1State = 0;
        const  ::QPointF* a2;
        int a2State = 0;
        const  ::QPointF* a3;
        int a3State = 0;
         ::Qt::MouseButton a4;
         ::Qt::MouseButtons* a5;
        int a5State = 0;
         ::Qt::KeyboardModifiers* a6;
        int a6State = 0;
         ::Qt::MouseEventSource a7;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ1J1J1EJ1J1E", sipType_QEvent_Type, &a0, sipType_QPointF, &a1, &a1State, sipType_QPointF, &a2, &a2State, sipType_QPointF, &a3, &a3State, sipType_Qt_MouseButton, &a4, sipType_Qt_MouseButtons, &a5, &a5State, sipType_Qt_KeyboardModifiers, &a6, &a6State, sipType_Qt_MouseEventSource, &a7))
        {
            sipCpp = new sipQMouseEvent(a0,*a1,*a2,*a3,a4,*a5,*a6,a7);
            sipReleaseType(const_cast< ::QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(const_cast< ::QPointF *>(a2),sipType_QPointF,a2State);
            sipReleaseType(const_cast< ::QPointF *>(a3),sipType_QPointF,a3State);
            sipReleaseType(a5,sipType_Qt_MouseButtons,a5State);
            sipReleaseType(a6,sipType_Qt_KeyboardModifiers,a6State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QMouseEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMouseEvent, &a0))
        {
            sipCpp = new sipQMouseEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QMouseEvent[] = {{75, 255, 1}};


static PyMethodDef methods_QMouseEvent[] = {
    {SIP_MLNAME_CAST(sipName_button), meth_QMouseEvent_button, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_button)},
    {SIP_MLNAME_CAST(sipName_buttons), meth_QMouseEvent_buttons, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_buttons)},
    {SIP_MLNAME_CAST(sipName_flags), meth_QMouseEvent_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_flags)},
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QMouseEvent_globalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_globalPos)},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QMouseEvent_globalX, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_globalX)},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QMouseEvent_globalY, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_globalY)},
    {SIP_MLNAME_CAST(sipName_localPos), meth_QMouseEvent_localPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_localPos)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QMouseEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_pos)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QMouseEvent_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_screenPos)},
    {SIP_MLNAME_CAST(sipName_source), meth_QMouseEvent_source, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_source)},
    {SIP_MLNAME_CAST(sipName_windowPos), meth_QMouseEvent_windowPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_windowPos)},
    {SIP_MLNAME_CAST(sipName_x), meth_QMouseEvent_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QMouseEvent_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_y)}
};

PyDoc_STRVAR(doc_QMouseEvent, "\1QMouseEvent(QEvent.Type, Union[QPointF, QPoint], Qt.MouseButton, Union[Qt.MouseButtons, Qt.MouseButton], Union[Qt.KeyboardModifiers, Qt.KeyboardModifier])\n"
"QMouseEvent(QEvent.Type, Union[QPointF, QPoint], Union[QPointF, QPoint], Qt.MouseButton, Union[Qt.MouseButtons, Qt.MouseButton], Union[Qt.KeyboardModifiers, Qt.KeyboardModifier])\n"
"QMouseEvent(QEvent.Type, Union[QPointF, QPoint], Union[QPointF, QPoint], Union[QPointF, QPoint], Qt.MouseButton, Union[Qt.MouseButtons, Qt.MouseButton], Union[Qt.KeyboardModifiers, Qt.KeyboardModifier])\n"
"QMouseEvent(QEvent.Type, Union[QPointF, QPoint], Union[QPointF, QPoint], Union[QPointF, QPoint], Qt.MouseButton, Union[Qt.MouseButtons, Qt.MouseButton], Union[Qt.KeyboardModifiers, Qt.KeyboardModifier], Qt.MouseEventSource)\n"
"QMouseEvent(QMouseEvent)");


static pyqt5ClassPluginDef plugin_QMouseEvent = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QMouseEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMouseEvent,
        {0},
        &plugin_QMouseEvent
    },
    {
        sipNameNr_QMouseEvent,
        {0, 0, 1},
        13, methods_QMouseEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMouseEvent,
    -1,
    -1,
    supers_QMouseEvent,
    0,
    init_type_QMouseEvent,
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
    dealloc_QMouseEvent,
    0,
    0,
    0,
    release_QMouseEvent,
    cast_QMouseEvent,
    0,
    0,
    0,
    0,
    0,
    0
};
