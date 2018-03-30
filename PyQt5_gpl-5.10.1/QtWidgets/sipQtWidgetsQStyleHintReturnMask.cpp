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

#line 897 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleHintReturnMask.cpp"

#line 26 "sip/QtGui/qregion.sip"
#include <qregion.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleHintReturnMask.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleHintReturnMask(void *, const sipTypeDef *);}
static void *cast_QStyleHintReturnMask(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleHintReturnMask *sipCpp = reinterpret_cast< ::QStyleHintReturnMask *>(sipCppV);

    if (targetType == sipType_QStyleHintReturn)
        return static_cast< ::QStyleHintReturn *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleHintReturnMask(void *, int);}
static void release_QStyleHintReturnMask(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleHintReturnMask *>(sipCppV);
}


extern "C" {static void assign_QStyleHintReturnMask(void *, SIP_SSIZE_T, void *);}
static void assign_QStyleHintReturnMask(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleHintReturnMask *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleHintReturnMask *>(sipSrc);
}


extern "C" {static void *array_QStyleHintReturnMask(SIP_SSIZE_T);}
static void *array_QStyleHintReturnMask(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleHintReturnMask[sipNrElem];
}


extern "C" {static void *copy_QStyleHintReturnMask(const void *, SIP_SSIZE_T);}
static void *copy_QStyleHintReturnMask(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleHintReturnMask(reinterpret_cast<const  ::QStyleHintReturnMask *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleHintReturnMask(sipSimpleWrapper *);}
static void dealloc_QStyleHintReturnMask(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleHintReturnMask(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleHintReturnMask(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleHintReturnMask(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleHintReturnMask *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QStyleHintReturnMask();

            return sipCpp;
        }
    }

    {
        const  ::QStyleHintReturnMask* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleHintReturnMask, &a0))
        {
            sipCpp = new  ::QStyleHintReturnMask(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleHintReturnMask[] = {{300, 255, 1}};

static sipEnumMemberDef enummembers_QStyleHintReturnMask[] = {
    {sipName_Type, static_cast<int>( ::QStyleHintReturnMask::Type), 305},
    {sipName_Version, static_cast<int>( ::QStyleHintReturnMask::Version), 306},
};


extern "C" {static PyObject *varget_QStyleHintReturnMask_region(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturnMask_region(void *sipSelf, PyObject *, PyObject *)
{
     ::QRegion*sipVal;
     ::QStyleHintReturnMask *sipCpp = reinterpret_cast< ::QStyleHintReturnMask *>(sipSelf);

    sipVal = &sipCpp->region;

    return sipConvertFromType(sipVal, sipType_QRegion, NULL);
}


extern "C" {static int varset_QStyleHintReturnMask_region(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturnMask_region(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QRegion*sipVal;
     ::QStyleHintReturnMask *sipCpp = reinterpret_cast< ::QStyleHintReturnMask *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QRegion *>(sipForceConvertToType(sipPy,sipType_QRegion,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->region = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleHintReturnMask[] = {
    {InstanceVariable, sipName_region, (PyMethodDef *)varget_QStyleHintReturnMask_region, (PyMethodDef *)varset_QStyleHintReturnMask_region, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleHintReturnMask, "\1QStyleHintReturnMask()\n"
"QStyleHintReturnMask(QStyleHintReturnMask)");


static pyqt5ClassPluginDef plugin_QStyleHintReturnMask = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleHintReturnMask = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleHintReturnMask,
        {0},
        &plugin_QStyleHintReturnMask
    },
    {
        sipNameNr_QStyleHintReturnMask,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleHintReturnMask,
        1, variables_QStyleHintReturnMask,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleHintReturnMask,
    -1,
    -1,
    supers_QStyleHintReturnMask,
    0,
    init_type_QStyleHintReturnMask,
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
    dealloc_QStyleHintReturnMask,
    assign_QStyleHintReturnMask,
    array_QStyleHintReturnMask,
    copy_QStyleHintReturnMask,
    release_QStyleHintReturnMask,
    cast_QStyleHintReturnMask,
    0,
    0,
    0,
    0,
    0,
    0
};
