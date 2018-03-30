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

#include "sipAPIQtXml.h"

#line 225 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQXmlErrorHandler.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQXmlErrorHandler.cpp"
#line 105 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQXmlErrorHandler.cpp"


class sipQXmlErrorHandler : public  ::QXmlErrorHandler
{
public:
    sipQXmlErrorHandler();
    sipQXmlErrorHandler(const  ::QXmlErrorHandler&);
    virtual ~sipQXmlErrorHandler();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString errorString() const;
    bool fatalError(const  ::QXmlParseException&);
    bool error(const  ::QXmlParseException&);
    bool warning(const  ::QXmlParseException&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlErrorHandler(const sipQXmlErrorHandler &);
    sipQXmlErrorHandler &operator = (const sipQXmlErrorHandler &);

    char sipPyMethods[4];
};

sipQXmlErrorHandler::sipQXmlErrorHandler():  ::QXmlErrorHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlErrorHandler::sipQXmlErrorHandler(const  ::QXmlErrorHandler& a0):  ::QXmlErrorHandler(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlErrorHandler::~sipQXmlErrorHandler()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQXmlErrorHandler::errorString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QXmlErrorHandler,sipName_errorString);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtXml_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_3(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQXmlErrorHandler::fatalError(const  ::QXmlParseException& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QXmlErrorHandler,sipName_fatalError);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QXmlParseException&);

    return sipVH_QtXml_32(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlErrorHandler::error(const  ::QXmlParseException& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QXmlErrorHandler,sipName_error);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QXmlParseException&);

    return sipVH_QtXml_32(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlErrorHandler::warning(const  ::QXmlParseException& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QXmlErrorHandler,sipName_warning);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QXmlParseException&);

    return sipVH_QtXml_32(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QXmlErrorHandler_warning, "warning(self, QXmlParseException) -> bool");

extern "C" {static PyObject *meth_QXmlErrorHandler_warning(PyObject *, PyObject *);}
static PyObject *meth_QXmlErrorHandler_warning(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlParseException* a0;
         ::QXmlErrorHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlErrorHandler, &sipCpp, sipType_QXmlParseException, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlErrorHandler, sipName_warning);
                return NULL;
            }

            sipRes = sipCpp->warning(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlErrorHandler, sipName_warning, doc_QXmlErrorHandler_warning);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlErrorHandler_error, "error(self, QXmlParseException) -> bool");

extern "C" {static PyObject *meth_QXmlErrorHandler_error(PyObject *, PyObject *);}
static PyObject *meth_QXmlErrorHandler_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlParseException* a0;
         ::QXmlErrorHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlErrorHandler, &sipCpp, sipType_QXmlParseException, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlErrorHandler, sipName_error);
                return NULL;
            }

            sipRes = sipCpp->error(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlErrorHandler, sipName_error, doc_QXmlErrorHandler_error);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlErrorHandler_fatalError, "fatalError(self, QXmlParseException) -> bool");

extern "C" {static PyObject *meth_QXmlErrorHandler_fatalError(PyObject *, PyObject *);}
static PyObject *meth_QXmlErrorHandler_fatalError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlParseException* a0;
         ::QXmlErrorHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlErrorHandler, &sipCpp, sipType_QXmlParseException, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlErrorHandler, sipName_fatalError);
                return NULL;
            }

            sipRes = sipCpp->fatalError(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlErrorHandler, sipName_fatalError, doc_QXmlErrorHandler_fatalError);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlErrorHandler_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QXmlErrorHandler_errorString(PyObject *, PyObject *);}
static PyObject *meth_QXmlErrorHandler_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlErrorHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlErrorHandler, &sipCpp))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlErrorHandler, sipName_errorString);
                return NULL;
            }

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlErrorHandler, sipName_errorString, doc_QXmlErrorHandler_errorString);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlErrorHandler(void *, int);}
static void release_QXmlErrorHandler(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlErrorHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::QXmlErrorHandler *>(sipCppV);
}


extern "C" {static void dealloc_QXmlErrorHandler(sipSimpleWrapper *);}
static void dealloc_QXmlErrorHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQXmlErrorHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlErrorHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QXmlErrorHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlErrorHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlErrorHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQXmlErrorHandler();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QXmlErrorHandler* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlErrorHandler, &a0))
        {
            sipCpp = new sipQXmlErrorHandler(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlErrorHandler[] = {
    {SIP_MLNAME_CAST(sipName_error), meth_QXmlErrorHandler_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlErrorHandler_error)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QXmlErrorHandler_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlErrorHandler_errorString)},
    {SIP_MLNAME_CAST(sipName_fatalError), meth_QXmlErrorHandler_fatalError, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlErrorHandler_fatalError)},
    {SIP_MLNAME_CAST(sipName_warning), meth_QXmlErrorHandler_warning, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlErrorHandler_warning)}
};

PyDoc_STRVAR(doc_QXmlErrorHandler, "\1QXmlErrorHandler()\n"
"QXmlErrorHandler(QXmlErrorHandler)");


static pyqt5ClassPluginDef plugin_QXmlErrorHandler = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QXmlErrorHandler = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QXmlErrorHandler,
        {0},
        &plugin_QXmlErrorHandler
    },
    {
        sipNameNr_QXmlErrorHandler,
        {0, 0, 1},
        4, methods_QXmlErrorHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlErrorHandler,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlErrorHandler,
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
    dealloc_QXmlErrorHandler,
    0,
    0,
    0,
    release_QXmlErrorHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
