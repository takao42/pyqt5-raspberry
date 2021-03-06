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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qpluginloader.sip"
#include <qpluginloader.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"

#line 28 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 27 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 149 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 247 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 235 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 38 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 30 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQPluginLoader.cpp"


class sipQPluginLoader : public  ::QPluginLoader
{
public:
    sipQPluginLoader( ::QObject*);
    sipQPluginLoader(const  ::QString&, ::QObject*);
    virtual ~sipQPluginLoader();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event( ::QEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    void timerEvent( ::QTimerEvent*);
    void childEvent( ::QChildEvent*);
    void customEvent( ::QEvent*);
    void connectNotify(const  ::QMetaMethod&);
    void disconnectNotify(const  ::QMetaMethod&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPluginLoader(const sipQPluginLoader &);
    sipQPluginLoader &operator = (const sipQPluginLoader &);

    char sipPyMethods[7];
};

sipQPluginLoader::sipQPluginLoader( ::QObject*a0):  ::QPluginLoader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPluginLoader::sipQPluginLoader(const  ::QString& a0, ::QObject*a1):  ::QPluginLoader(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPluginLoader::~sipQPluginLoader()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQPluginLoader::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtCore_qt_metaobject(sipPySelf,sipType_QPluginLoader);

    return  ::QPluginLoader::metaObject();
}

int sipQPluginLoader::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QPluginLoader::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QPluginLoader,_c,_id,_a);

    return _id;
}

void *sipQPluginLoader::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QPluginLoader, _clname, &sipCpp) ? sipCpp :  ::QPluginLoader::qt_metacast(_clname));
}

bool sipQPluginLoader::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QPluginLoader::event(a0);

    extern bool sipVH_QtCore_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtCore_0(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

bool sipQPluginLoader::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QPluginLoader::eventFilter(a0,a1);

    extern bool sipVH_QtCore_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtCore_1(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0, a1);
}

void sipQPluginLoader::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QPluginLoader::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtCore_2(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQPluginLoader::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QPluginLoader::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtCore_3(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQPluginLoader::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QPluginLoader::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtCore_4(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQPluginLoader::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QPluginLoader::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtCore_5(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQPluginLoader::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QPluginLoader::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtCore_5(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QPluginLoader_instance, "instance(self) -> QObject");

extern "C" {static PyObject *meth_QPluginLoader_instance(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_instance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
             ::QObject*sipRes;

            sipRes = sipCpp->instance();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_instance, doc_QPluginLoader_instance);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_staticInstances, "staticInstances() -> object");

extern "C" {static PyObject *meth_QPluginLoader_staticInstances(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_staticInstances(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QObjectList*sipRes;

            sipRes = new  ::QObjectList( ::QPluginLoader::staticInstances());

            return sipConvertFromNewType(sipRes,sipType_QList_0101QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_staticInstances, doc_QPluginLoader_staticInstances);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_load, "load(self) -> bool");

extern "C" {static PyObject *meth_QPluginLoader_load(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->load();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_load, doc_QPluginLoader_load);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_unload, "unload(self) -> bool");

extern "C" {static PyObject *meth_QPluginLoader_unload(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_unload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->unload();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_unload, doc_QPluginLoader_unload);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_isLoaded, "isLoaded(self) -> bool");

extern "C" {static PyObject *meth_QPluginLoader_isLoaded(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_isLoaded(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLoaded();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_isLoaded, doc_QPluginLoader_isLoaded);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_setFileName, "setFileName(self, str)");

extern "C" {static PyObject *meth_QPluginLoader_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setFileName(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_setFileName, doc_QPluginLoader_setFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_fileName, "fileName(self) -> str");

extern "C" {static PyObject *meth_QPluginLoader_fileName(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->fileName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_fileName, doc_QPluginLoader_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QPluginLoader_errorString(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_errorString, doc_QPluginLoader_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_setLoadHints, "setLoadHints(self, Union[QLibrary.LoadHints, QLibrary.LoadHint])");

extern "C" {static PyObject *meth_QPluginLoader_setLoadHints(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_setLoadHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLibrary::LoadHints* a0;
        int a0State = 0;
         ::QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            sipCpp->setLoadHints(*a0);
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_setLoadHints, doc_QPluginLoader_setLoadHints);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_loadHints, "loadHints(self) -> QLibrary.LoadHints");

extern "C" {static PyObject *meth_QPluginLoader_loadHints(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_loadHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
             ::QLibrary::LoadHints*sipRes;

            sipRes = new  ::QLibrary::LoadHints(sipCpp->loadHints());

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_loadHints, doc_QPluginLoader_loadHints);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPluginLoader(void *, const sipTypeDef *);}
static void *cast_QPluginLoader(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPluginLoader *sipCpp = reinterpret_cast< ::QPluginLoader *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPluginLoader(void *, int);}
static void release_QPluginLoader(void *sipCppV, int)
{
     ::QPluginLoader *sipCpp = reinterpret_cast< ::QPluginLoader *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QPluginLoader(sipSimpleWrapper *);}
static void dealloc_QPluginLoader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPluginLoader *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPluginLoader(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPluginLoader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPluginLoader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPluginLoader *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQPluginLoader(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QString,&a0, &a0State, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQPluginLoader(*a0,a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPluginLoader[] = {{165, 255, 1}};


static PyMethodDef methods_QPluginLoader[] = {
    {SIP_MLNAME_CAST(sipName_errorString), meth_QPluginLoader_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_errorString)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QPluginLoader_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_fileName)},
    {SIP_MLNAME_CAST(sipName_instance), meth_QPluginLoader_instance, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_instance)},
    {SIP_MLNAME_CAST(sipName_isLoaded), meth_QPluginLoader_isLoaded, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_isLoaded)},
    {SIP_MLNAME_CAST(sipName_load), meth_QPluginLoader_load, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_load)},
    {SIP_MLNAME_CAST(sipName_loadHints), meth_QPluginLoader_loadHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_loadHints)},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QPluginLoader_setFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_setFileName)},
    {SIP_MLNAME_CAST(sipName_setLoadHints), meth_QPluginLoader_setLoadHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_setLoadHints)},
    {SIP_MLNAME_CAST(sipName_staticInstances), meth_QPluginLoader_staticInstances, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_staticInstances)},
    {SIP_MLNAME_CAST(sipName_unload), meth_QPluginLoader_unload, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_unload)}
};

PyDoc_STRVAR(doc_QPluginLoader, "\1QPluginLoader(parent: QObject = None)\n"
"QPluginLoader(str, parent: QObject = None)");


static pyqt5ClassPluginDef plugin_QPluginLoader = {
    & ::QPluginLoader::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QPluginLoader = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPluginLoader,
        {0},
        &plugin_QPluginLoader
    },
    {
        sipNameNr_QPluginLoader,
        {0, 0, 1},
        10, methods_QPluginLoader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPluginLoader,
    -1,
    -1,
    supers_QPluginLoader,
    0,
    init_type_QPluginLoader,
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
    dealloc_QPluginLoader,
    0,
    0,
    0,
    release_QPluginLoader,
    cast_QPluginLoader,
    0,
    0,
    0,
    0,
    0,
    0
};
