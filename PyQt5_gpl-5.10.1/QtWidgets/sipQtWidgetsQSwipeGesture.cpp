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

#include "sipAPIQtWidgets.h"

#line 111 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qgesture.sip"
#include <qgesture.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qgesture.sip"
#include <qgesture.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 57 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 60 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 66 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQSwipeGesture.cpp"


class sipQSwipeGesture : public  ::QSwipeGesture
{
public:
    sipQSwipeGesture( ::QObject*);
    virtual ~sipQSwipeGesture();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const  ::QMetaMethod&);
    void connectNotify(const  ::QMetaMethod&);
    void customEvent( ::QEvent*);
    void childEvent( ::QChildEvent*);
    void timerEvent( ::QTimerEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    bool event( ::QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSwipeGesture(const sipQSwipeGesture &);
    sipQSwipeGesture &operator = (const sipQSwipeGesture &);

    char sipPyMethods[7];
};

sipQSwipeGesture::sipQSwipeGesture( ::QObject*a0):  ::QSwipeGesture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSwipeGesture::~sipQSwipeGesture()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQSwipeGesture::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtWidgets_qt_metaobject(sipPySelf,sipType_QSwipeGesture);

    return  ::QSwipeGesture::metaObject();
}

int sipQSwipeGesture::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QSwipeGesture::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWidgets_qt_metacall(sipPySelf,sipType_QSwipeGesture,_c,_id,_a);

    return _id;
}

void *sipQSwipeGesture::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtWidgets_qt_metacast(sipPySelf, sipType_QSwipeGesture, _clname, &sipCpp) ? sipCpp :  ::QSwipeGesture::qt_metacast(_clname));
}

void sipQSwipeGesture::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QSwipeGesture::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtWidgets_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtWidgets_0(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQSwipeGesture::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QSwipeGesture::connectNotify(a0);
        return;
    }

    extern void sipVH_QtWidgets_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtWidgets_0(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQSwipeGesture::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QSwipeGesture::customEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtWidgets_1(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQSwipeGesture::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QSwipeGesture::childEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtWidgets_2(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQSwipeGesture::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QSwipeGesture::timerEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtWidgets_3(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQSwipeGesture::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QSwipeGesture::eventFilter(a0,a1);

    extern bool sipVH_QtWidgets_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtWidgets_4(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQSwipeGesture::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QSwipeGesture::event(a0);

    extern bool sipVH_QtWidgets_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtWidgets_5(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSwipeGesture_horizontalDirection, "horizontalDirection(self) -> QSwipeGesture.SwipeDirection");

extern "C" {static PyObject *meth_QSwipeGesture_horizontalDirection(PyObject *, PyObject *);}
static PyObject *meth_QSwipeGesture_horizontalDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSwipeGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSwipeGesture, &sipCpp))
        {
             ::QSwipeGesture::SwipeDirection sipRes;

            sipRes = sipCpp->horizontalDirection();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QSwipeGesture_SwipeDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSwipeGesture, sipName_horizontalDirection, doc_QSwipeGesture_horizontalDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QSwipeGesture_verticalDirection, "verticalDirection(self) -> QSwipeGesture.SwipeDirection");

extern "C" {static PyObject *meth_QSwipeGesture_verticalDirection(PyObject *, PyObject *);}
static PyObject *meth_QSwipeGesture_verticalDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSwipeGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSwipeGesture, &sipCpp))
        {
             ::QSwipeGesture::SwipeDirection sipRes;

            sipRes = sipCpp->verticalDirection();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QSwipeGesture_SwipeDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSwipeGesture, sipName_verticalDirection, doc_QSwipeGesture_verticalDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QSwipeGesture_swipeAngle, "swipeAngle(self) -> float");

extern "C" {static PyObject *meth_QSwipeGesture_swipeAngle(PyObject *, PyObject *);}
static PyObject *meth_QSwipeGesture_swipeAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSwipeGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSwipeGesture, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->swipeAngle();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSwipeGesture, sipName_swipeAngle, doc_QSwipeGesture_swipeAngle);

    return NULL;
}


PyDoc_STRVAR(doc_QSwipeGesture_setSwipeAngle, "setSwipeAngle(self, float)");

extern "C" {static PyObject *meth_QSwipeGesture_setSwipeAngle(PyObject *, PyObject *);}
static PyObject *meth_QSwipeGesture_setSwipeAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QSwipeGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QSwipeGesture, &sipCpp, &a0))
        {
            sipCpp->setSwipeAngle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSwipeGesture, sipName_setSwipeAngle, doc_QSwipeGesture_setSwipeAngle);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSwipeGesture(void *, const sipTypeDef *);}
static void *cast_QSwipeGesture(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSwipeGesture *sipCpp = reinterpret_cast< ::QSwipeGesture *>(sipCppV);

    if (targetType == sipType_QGesture)
        return static_cast< ::QGesture *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSwipeGesture(void *, int);}
static void release_QSwipeGesture(void *sipCppV, int)
{
     ::QSwipeGesture *sipCpp = reinterpret_cast< ::QSwipeGesture *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QSwipeGesture(sipSimpleWrapper *);}
static void dealloc_QSwipeGesture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQSwipeGesture *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSwipeGesture(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QSwipeGesture(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSwipeGesture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSwipeGesture *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQSwipeGesture(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSwipeGesture[] = {{102, 255, 1}};


static PyMethodDef methods_QSwipeGesture[] = {
    {SIP_MLNAME_CAST(sipName_horizontalDirection), meth_QSwipeGesture_horizontalDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QSwipeGesture_horizontalDirection)},
    {SIP_MLNAME_CAST(sipName_setSwipeAngle), meth_QSwipeGesture_setSwipeAngle, METH_VARARGS, SIP_MLDOC_CAST(doc_QSwipeGesture_setSwipeAngle)},
    {SIP_MLNAME_CAST(sipName_swipeAngle), meth_QSwipeGesture_swipeAngle, METH_VARARGS, SIP_MLDOC_CAST(doc_QSwipeGesture_swipeAngle)},
    {SIP_MLNAME_CAST(sipName_verticalDirection), meth_QSwipeGesture_verticalDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QSwipeGesture_verticalDirection)}
};

static sipEnumMemberDef enummembers_QSwipeGesture[] = {
    {sipName_Down, static_cast<int>( ::QSwipeGesture::Down), 412},
    {sipName_Left, static_cast<int>( ::QSwipeGesture::Left), 412},
    {sipName_NoDirection, static_cast<int>( ::QSwipeGesture::NoDirection), 412},
    {sipName_Right, static_cast<int>( ::QSwipeGesture::Right), 412},
    {sipName_Up, static_cast<int>( ::QSwipeGesture::Up), 412},
};

PyDoc_STRVAR(doc_QSwipeGesture, "\1QSwipeGesture(parent: QObject = None)");


static pyqt5ClassPluginDef plugin_QSwipeGesture = {
    & ::QSwipeGesture::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QSwipeGesture = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSwipeGesture,
        {0},
        &plugin_QSwipeGesture
    },
    {
        sipNameNr_QSwipeGesture,
        {0, 0, 1},
        4, methods_QSwipeGesture,
        5, enummembers_QSwipeGesture,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSwipeGesture,
    -1,
    -1,
    supers_QSwipeGesture,
    0,
    init_type_QSwipeGesture,
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
    dealloc_QSwipeGesture,
    0,
    0,
    0,
    release_QSwipeGesture,
    cast_QSwipeGesture,
    0,
    0,
    0,
    0,
    0,
    0
};