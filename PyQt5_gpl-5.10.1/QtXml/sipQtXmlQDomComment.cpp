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

#line 361 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"

#line 54 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 309 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 30 "sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 272 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 426 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 385 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 399 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 54 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 348 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 57 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 414 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 60 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 174 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 63 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 192 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 66 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 260 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 69 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 373 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 72 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 292 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 75 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 234 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 78 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"
#line 154 "/home/pi/PyQt5_gpl-5.10.1/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 81 "/home/pi/PyQt5_gpl-5.10.1/QtXml/sipQtXmlQDomComment.cpp"


PyDoc_STRVAR(doc_QDomComment_nodeType, "nodeType(self) -> QDomNode.NodeType");

extern "C" {static PyObject *meth_QDomComment_nodeType(PyObject *, PyObject *);}
static PyObject *meth_QDomComment_nodeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomComment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomComment, &sipCpp))
        {
             ::QDomNode::NodeType sipRes;

            sipRes = sipCpp->nodeType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QDomNode_NodeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomComment, sipName_nodeType, doc_QDomComment_nodeType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QDomComment(void *, const sipTypeDef *);}
static void *cast_QDomComment(void *sipCppV, const sipTypeDef *targetType)
{
     ::QDomComment *sipCpp = reinterpret_cast< ::QDomComment *>(sipCppV);

    if (targetType == sipType_QDomCharacterData)
        return static_cast< ::QDomCharacterData *>(sipCpp);

    if (targetType == sipType_QDomNode)
        return static_cast< ::QDomNode *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomComment(void *, int);}
static void release_QDomComment(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDomComment *>(sipCppV);
}


extern "C" {static void assign_QDomComment(void *, SIP_SSIZE_T, void *);}
static void assign_QDomComment(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDomComment *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDomComment *>(sipSrc);
}


extern "C" {static void *array_QDomComment(SIP_SSIZE_T);}
static void *array_QDomComment(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDomComment[sipNrElem];
}


extern "C" {static void *copy_QDomComment(const void *, SIP_SSIZE_T);}
static void *copy_QDomComment(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDomComment(reinterpret_cast<const  ::QDomComment *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomComment(sipSimpleWrapper *);}
static void dealloc_QDomComment(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDomComment(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDomComment(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDomComment(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDomComment *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QDomComment();

            return sipCpp;
        }
    }

    {
        const  ::QDomComment* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDomComment, &a0))
        {
            sipCpp = new  ::QDomComment(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDomComment[] = {{2, 255, 1}};


static PyMethodDef methods_QDomComment[] = {
    {SIP_MLNAME_CAST(sipName_nodeType), meth_QDomComment_nodeType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomComment_nodeType)}
};

PyDoc_STRVAR(doc_QDomComment, "\1QDomComment()\n"
"QDomComment(QDomComment)");


static pyqt5ClassPluginDef plugin_QDomComment = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QDomComment = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDomComment,
        {0},
        &plugin_QDomComment
    },
    {
        sipNameNr_QDomComment,
        {0, 0, 1},
        1, methods_QDomComment,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDomComment,
    -1,
    -1,
    supers_QDomComment,
    0,
    init_type_QDomComment,
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
    dealloc_QDomComment,
    assign_QDomComment,
    array_QDomComment,
    copy_QDomComment,
    release_QDomComment,
    cast_QDomComment,
    0,
    0,
    0,
    0,
    0,
    0
};
