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

#include "sipAPIQtNetwork.h"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qnetworkconfigmanager.sip"
#include <qnetworkconfigmanager.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qnetworkconfigmanager.sip"
#include <qnetworkconfigmanager.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 60 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 63 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 69 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 72 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 78 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 81 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 84 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 87 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 90 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkConfigurationManager.cpp"


class sipQNetworkConfigurationManager : public  ::QNetworkConfigurationManager
{
public:
    sipQNetworkConfigurationManager( ::QObject*);
    virtual ~sipQNetworkConfigurationManager();

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
    sipQNetworkConfigurationManager(const sipQNetworkConfigurationManager &);
    sipQNetworkConfigurationManager &operator = (const sipQNetworkConfigurationManager &);

    char sipPyMethods[7];
};

sipQNetworkConfigurationManager::sipQNetworkConfigurationManager( ::QObject*a0):  ::QNetworkConfigurationManager(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQNetworkConfigurationManager::~sipQNetworkConfigurationManager()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQNetworkConfigurationManager::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtNetwork_qt_metaobject(sipPySelf,sipType_QNetworkConfigurationManager);

    return  ::QNetworkConfigurationManager::metaObject();
}

int sipQNetworkConfigurationManager::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QNetworkConfigurationManager::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNetwork_qt_metacall(sipPySelf,sipType_QNetworkConfigurationManager,_c,_id,_a);

    return _id;
}

void *sipQNetworkConfigurationManager::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtNetwork_qt_metacast(sipPySelf, sipType_QNetworkConfigurationManager, _clname, &sipCpp) ? sipCpp :  ::QNetworkConfigurationManager::qt_metacast(_clname));
}

bool sipQNetworkConfigurationManager::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QNetworkConfigurationManager::event(a0);

    extern bool sipVH_QtNetwork_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtNetwork_5(sipGILState, sipImportedVirtErrorHandlers_QtNetwork_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQNetworkConfigurationManager::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QNetworkConfigurationManager::eventFilter(a0,a1);

    extern bool sipVH_QtNetwork_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtNetwork_4(sipGILState, sipImportedVirtErrorHandlers_QtNetwork_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQNetworkConfigurationManager::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QNetworkConfigurationManager::timerEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtNetwork_3(sipGILState, sipImportedVirtErrorHandlers_QtNetwork_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQNetworkConfigurationManager::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QNetworkConfigurationManager::childEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtNetwork_2(sipGILState, sipImportedVirtErrorHandlers_QtNetwork_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQNetworkConfigurationManager::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QNetworkConfigurationManager::customEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtNetwork_1(sipGILState, sipImportedVirtErrorHandlers_QtNetwork_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQNetworkConfigurationManager::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QNetworkConfigurationManager::connectNotify(a0);
        return;
    }

    extern void sipVH_QtNetwork_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtNetwork_0(sipGILState, sipImportedVirtErrorHandlers_QtNetwork_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQNetworkConfigurationManager::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QNetworkConfigurationManager::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtNetwork_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtNetwork_0(sipGILState, sipImportedVirtErrorHandlers_QtNetwork_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QNetworkConfigurationManager_capabilities, "capabilities(self) -> QNetworkConfigurationManager.Capabilities");

extern "C" {static PyObject *meth_QNetworkConfigurationManager_capabilities(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfigurationManager_capabilities(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkConfigurationManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfigurationManager, &sipCpp))
        {
             ::QNetworkConfigurationManager::Capabilities*sipRes;

            sipRes = new  ::QNetworkConfigurationManager::Capabilities(sipCpp->capabilities());

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfigurationManager_Capabilities,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfigurationManager, sipName_capabilities, doc_QNetworkConfigurationManager_capabilities);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfigurationManager_defaultConfiguration, "defaultConfiguration(self) -> QNetworkConfiguration");

extern "C" {static PyObject *meth_QNetworkConfigurationManager_defaultConfiguration(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfigurationManager_defaultConfiguration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkConfigurationManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfigurationManager, &sipCpp))
        {
             ::QNetworkConfiguration*sipRes;

            sipRes = new  ::QNetworkConfiguration(sipCpp->defaultConfiguration());

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfigurationManager, sipName_defaultConfiguration, doc_QNetworkConfigurationManager_defaultConfiguration);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfigurationManager_allConfigurations, "allConfigurations(self, flags: Union[QNetworkConfiguration.StateFlags, QNetworkConfiguration.StateFlag] = QNetworkConfiguration.StateFlags()) -> object");

extern "C" {static PyObject *meth_QNetworkConfigurationManager_allConfigurations(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfigurationManager_allConfigurations(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkConfiguration::StateFlags a0def = QNetworkConfiguration::StateFlags();
         ::QNetworkConfiguration::StateFlags* a0 = &a0def;
        int a0State = 0;
        const  ::QNetworkConfigurationManager *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QNetworkConfigurationManager, &sipCpp, sipType_QNetworkConfiguration_StateFlags, &a0, &a0State))
        {
            QList< ::QNetworkConfiguration>*sipRes;

            sipRes = new QList< ::QNetworkConfiguration>(sipCpp->allConfigurations(*a0));
            sipReleaseType(a0,sipType_QNetworkConfiguration_StateFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkConfiguration,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfigurationManager, sipName_allConfigurations, doc_QNetworkConfigurationManager_allConfigurations);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfigurationManager_configurationFromIdentifier, "configurationFromIdentifier(self, str) -> QNetworkConfiguration");

extern "C" {static PyObject *meth_QNetworkConfigurationManager_configurationFromIdentifier(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfigurationManager_configurationFromIdentifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QNetworkConfigurationManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkConfigurationManager, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QNetworkConfiguration*sipRes;

            sipRes = new  ::QNetworkConfiguration(sipCpp->configurationFromIdentifier(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfigurationManager, sipName_configurationFromIdentifier, doc_QNetworkConfigurationManager_configurationFromIdentifier);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfigurationManager_updateConfigurations, "updateConfigurations(self)");

extern "C" {static PyObject *meth_QNetworkConfigurationManager_updateConfigurations(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfigurationManager_updateConfigurations(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkConfigurationManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfigurationManager, &sipCpp))
        {
            sipCpp->updateConfigurations();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfigurationManager, sipName_updateConfigurations, doc_QNetworkConfigurationManager_updateConfigurations);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfigurationManager_isOnline, "isOnline(self) -> bool");

extern "C" {static PyObject *meth_QNetworkConfigurationManager_isOnline(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfigurationManager_isOnline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkConfigurationManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfigurationManager, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isOnline();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfigurationManager, sipName_isOnline, doc_QNetworkConfigurationManager_isOnline);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QNetworkConfigurationManager(void *, const sipTypeDef *);}
static void *cast_QNetworkConfigurationManager(void *sipCppV, const sipTypeDef *targetType)
{
     ::QNetworkConfigurationManager *sipCpp = reinterpret_cast< ::QNetworkConfigurationManager *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkConfigurationManager(void *, int);}
static void release_QNetworkConfigurationManager(void *sipCppV, int)
{
     ::QNetworkConfigurationManager *sipCpp = reinterpret_cast< ::QNetworkConfigurationManager *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QNetworkConfigurationManager(sipSimpleWrapper *);}
static void dealloc_QNetworkConfigurationManager(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQNetworkConfigurationManager *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QNetworkConfigurationManager(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QNetworkConfigurationManager(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkConfigurationManager(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQNetworkConfigurationManager *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQNetworkConfigurationManager(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QNetworkConfigurationManager[] = {{11, 0, 1}};


static PyMethodDef methods_QNetworkConfigurationManager[] = {
    {SIP_MLNAME_CAST(sipName_allConfigurations), (PyCFunction)meth_QNetworkConfigurationManager_allConfigurations, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QNetworkConfigurationManager_allConfigurations)},
    {SIP_MLNAME_CAST(sipName_capabilities), meth_QNetworkConfigurationManager_capabilities, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfigurationManager_capabilities)},
    {SIP_MLNAME_CAST(sipName_configurationFromIdentifier), meth_QNetworkConfigurationManager_configurationFromIdentifier, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfigurationManager_configurationFromIdentifier)},
    {SIP_MLNAME_CAST(sipName_defaultConfiguration), meth_QNetworkConfigurationManager_defaultConfiguration, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfigurationManager_defaultConfiguration)},
    {SIP_MLNAME_CAST(sipName_isOnline), meth_QNetworkConfigurationManager_isOnline, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfigurationManager_isOnline)},
    {SIP_MLNAME_CAST(sipName_updateConfigurations), meth_QNetworkConfigurationManager_updateConfigurations, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfigurationManager_updateConfigurations)}
};

static sipEnumMemberDef enummembers_QNetworkConfigurationManager[] = {
    {sipName_ApplicationLevelRoaming, static_cast<int>( ::QNetworkConfigurationManager::ApplicationLevelRoaming), 64},
    {sipName_CanStartAndStopInterfaces, static_cast<int>( ::QNetworkConfigurationManager::CanStartAndStopInterfaces), 64},
    {sipName_DataStatistics, static_cast<int>( ::QNetworkConfigurationManager::DataStatistics), 64},
    {sipName_DirectConnectionRouting, static_cast<int>( ::QNetworkConfigurationManager::DirectConnectionRouting), 64},
    {sipName_ForcedRoaming, static_cast<int>( ::QNetworkConfigurationManager::ForcedRoaming), 64},
    {sipName_NetworkSessionRequired, static_cast<int>( ::QNetworkConfigurationManager::NetworkSessionRequired), 64},
    {sipName_SystemSessionSupport, static_cast<int>( ::QNetworkConfigurationManager::SystemSessionSupport), 64},
};

PyDoc_STRVAR(doc_QNetworkConfigurationManager, "\1QNetworkConfigurationManager(parent: QObject = None)");


/* Define this type's signals. */
static const pyqt5QtSignal signals_QNetworkConfigurationManager[] = {
    {"updateCompleted()", "\1updateCompleted(self)", 0, 0},
    {"onlineStateChanged(bool)", "\1onlineStateChanged(self, bool)", 0, 0},
    {"configurationChanged(QNetworkConfiguration)", "\1configurationChanged(self, QNetworkConfiguration)", 0, 0},
    {"configurationRemoved(QNetworkConfiguration)", "\1configurationRemoved(self, QNetworkConfiguration)", 0, 0},
    {"configurationAdded(QNetworkConfiguration)", "\1configurationAdded(self, QNetworkConfiguration)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt5ClassPluginDef plugin_QNetworkConfigurationManager = {
    & ::QNetworkConfigurationManager::staticMetaObject,
    0,
    signals_QNetworkConfigurationManager,
    0
};


sipClassTypeDef sipTypeDef_QtNetwork_QNetworkConfigurationManager = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QNetworkConfigurationManager,
        {0},
        &plugin_QNetworkConfigurationManager
    },
    {
        sipNameNr_QNetworkConfigurationManager,
        {0, 0, 1},
        6, methods_QNetworkConfigurationManager,
        7, enummembers_QNetworkConfigurationManager,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkConfigurationManager,
    -1,
    -1,
    supers_QNetworkConfigurationManager,
    0,
    init_type_QNetworkConfigurationManager,
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
    dealloc_QNetworkConfigurationManager,
    0,
    0,
    0,
    release_QNetworkConfigurationManager,
    cast_QNetworkConfigurationManager,
    0,
    0,
    0,
    0,
    0,
    0
};
