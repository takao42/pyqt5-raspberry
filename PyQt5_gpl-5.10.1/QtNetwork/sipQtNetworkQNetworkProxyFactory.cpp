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

#line 140 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkProxyFactory.cpp"

#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkProxyFactory.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkProxyFactory.cpp"
#line 91 "/home/pi/PyQt5_gpl-5.10.1/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtNetwork/sipQtNetworkQNetworkProxyFactory.cpp"


class sipQNetworkProxyFactory : public  ::QNetworkProxyFactory
{
public:
    sipQNetworkProxyFactory();
    sipQNetworkProxyFactory(const  ::QNetworkProxyFactory&);
    virtual ~sipQNetworkProxyFactory();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QList< ::QNetworkProxy> queryProxy(const  ::QNetworkProxyQuery&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQNetworkProxyFactory(const sipQNetworkProxyFactory &);
    sipQNetworkProxyFactory &operator = (const sipQNetworkProxyFactory &);

    char sipPyMethods[1];
};

sipQNetworkProxyFactory::sipQNetworkProxyFactory():  ::QNetworkProxyFactory(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQNetworkProxyFactory::sipQNetworkProxyFactory(const  ::QNetworkProxyFactory& a0):  ::QNetworkProxyFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQNetworkProxyFactory::~sipQNetworkProxyFactory()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

QList< ::QNetworkProxy> sipQNetworkProxyFactory::queryProxy(const  ::QNetworkProxyQuery& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QNetworkProxyFactory,sipName_queryProxy);

    if (!sipMeth)
        return QList< ::QNetworkProxy>();

    extern QList< ::QNetworkProxy> sipVH_QtNetwork_35(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QNetworkProxyQuery&);

    return sipVH_QtNetwork_35(sipGILState, sipImportedVirtErrorHandlers_QtNetwork_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QNetworkProxyFactory_queryProxy, "queryProxy(self, query: QNetworkProxyQuery = QNetworkProxyQuery()) -> object");

extern "C" {static PyObject *meth_QNetworkProxyFactory_queryProxy(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_queryProxy(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QNetworkProxyQuery& a0def = QNetworkProxyQuery();
        const  ::QNetworkProxyQuery* a0 = &a0def;
         ::QNetworkProxyFactory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_query,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J9", &sipSelf, sipType_QNetworkProxyFactory, &sipCpp, sipType_QNetworkProxyQuery, &a0))
        {
            QList< ::QNetworkProxy>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QNetworkProxyFactory, sipName_queryProxy);
                return NULL;
            }

            sipRes = new QList< ::QNetworkProxy>(sipCpp->queryProxy(*a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkProxy,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_queryProxy, doc_QNetworkProxyFactory_queryProxy);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyFactory_setApplicationProxyFactory, "setApplicationProxyFactory(QNetworkProxyFactory)");

extern "C" {static PyObject *meth_QNetworkProxyFactory_setApplicationProxyFactory(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_setApplicationProxyFactory(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkProxyFactory* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J:", sipType_QNetworkProxyFactory, &a0))
        {
             ::QNetworkProxyFactory::setApplicationProxyFactory(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_setApplicationProxyFactory, doc_QNetworkProxyFactory_setApplicationProxyFactory);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyFactory_proxyForQuery, "proxyForQuery(QNetworkProxyQuery) -> List[QNetworkProxy]");

extern "C" {static PyObject *meth_QNetworkProxyFactory_proxyForQuery(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_proxyForQuery(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxyQuery* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QNetworkProxyQuery, &a0))
        {
            QList< ::QNetworkProxy>*sipRes;

            sipRes = new QList< ::QNetworkProxy>( ::QNetworkProxyFactory::proxyForQuery(*a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkProxy,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_proxyForQuery, doc_QNetworkProxyFactory_proxyForQuery);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyFactory_systemProxyForQuery, "systemProxyForQuery(query: QNetworkProxyQuery = QNetworkProxyQuery()) -> List[QNetworkProxy]");

extern "C" {static PyObject *meth_QNetworkProxyFactory_systemProxyForQuery(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_systemProxyForQuery(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxyQuery& a0def = QNetworkProxyQuery();
        const  ::QNetworkProxyQuery* a0 = &a0def;

        static const char *sipKwdList[] = {
            sipName_query,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|J9", sipType_QNetworkProxyQuery, &a0))
        {
            QList< ::QNetworkProxy>*sipRes;

            sipRes = new QList< ::QNetworkProxy>( ::QNetworkProxyFactory::systemProxyForQuery(*a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkProxy,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_systemProxyForQuery, doc_QNetworkProxyFactory_systemProxyForQuery);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyFactory_setUseSystemConfiguration, "setUseSystemConfiguration(bool)");

extern "C" {static PyObject *meth_QNetworkProxyFactory_setUseSystemConfiguration(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_setUseSystemConfiguration(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "b", &a0))
        {
             ::QNetworkProxyFactory::setUseSystemConfiguration(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_setUseSystemConfiguration, doc_QNetworkProxyFactory_setUseSystemConfiguration);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkProxyFactory(void *, int);}
static void release_QNetworkProxyFactory(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQNetworkProxyFactory *>(sipCppV);
    else
        delete reinterpret_cast< ::QNetworkProxyFactory *>(sipCppV);
}


extern "C" {static void dealloc_QNetworkProxyFactory(sipSimpleWrapper *);}
static void dealloc_QNetworkProxyFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQNetworkProxyFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QNetworkProxyFactory(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QNetworkProxyFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkProxyFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQNetworkProxyFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQNetworkProxyFactory();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QNetworkProxyFactory* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkProxyFactory, &a0))
        {
            sipCpp = new sipQNetworkProxyFactory(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QNetworkProxyFactory[] = {
    {SIP_MLNAME_CAST(sipName_proxyForQuery), meth_QNetworkProxyFactory_proxyForQuery, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyFactory_proxyForQuery)},
    {SIP_MLNAME_CAST(sipName_queryProxy), (PyCFunction)meth_QNetworkProxyFactory_queryProxy, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QNetworkProxyFactory_queryProxy)},
    {SIP_MLNAME_CAST(sipName_setApplicationProxyFactory), meth_QNetworkProxyFactory_setApplicationProxyFactory, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyFactory_setApplicationProxyFactory)},
    {SIP_MLNAME_CAST(sipName_setUseSystemConfiguration), meth_QNetworkProxyFactory_setUseSystemConfiguration, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyFactory_setUseSystemConfiguration)},
    {SIP_MLNAME_CAST(sipName_systemProxyForQuery), (PyCFunction)meth_QNetworkProxyFactory_systemProxyForQuery, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QNetworkProxyFactory_systemProxyForQuery)}
};

PyDoc_STRVAR(doc_QNetworkProxyFactory, "\1QNetworkProxyFactory()\n"
"QNetworkProxyFactory(QNetworkProxyFactory)");


static pyqt5ClassPluginDef plugin_QNetworkProxyFactory = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtNetwork_QNetworkProxyFactory = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QNetworkProxyFactory,
        {0},
        &plugin_QNetworkProxyFactory
    },
    {
        sipNameNr_QNetworkProxyFactory,
        {0, 0, 1},
        5, methods_QNetworkProxyFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkProxyFactory,
    -1,
    -1,
    0,
    0,
    init_type_QNetworkProxyFactory,
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
    dealloc_QNetworkProxyFactory,
    0,
    0,
    0,
    release_QNetworkProxyFactory,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
