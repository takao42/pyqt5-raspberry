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

#line 919 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp"

#line 919 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp"


extern "C" {static long slot_QStyleOptionToolBar_ToolBarFeatures___hash__(PyObject *);}
static long slot_QStyleOptionToolBar_ToolBarFeatures___hash__(PyObject *sipSelf)
{
     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolBar_ToolBarFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QStyleOptionToolBar::ToolBarFeatures::Int();
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QStyleOptionToolBar_ToolBarFeatures___bool__(PyObject *);}
static int slot_QStyleOptionToolBar_ToolBarFeatures___bool__(PyObject *sipSelf)
{
     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolBar_ToolBarFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionToolBar::ToolBarFeatures::Int() != 0);
#line 76 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolBar_ToolBarFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QStyleOptionToolBar::ToolBarFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolBar_ToolBarFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionToolBar::ToolBarFeatures::Int() != a0->operator QStyleOptionToolBar::ToolBarFeatures::Int());
#line 106 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp"
            sipReleaseType(const_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(a0),sipType_QStyleOptionToolBar_ToolBarFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QStyleOptionToolBar_ToolBarFeatures, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolBar_ToolBarFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QStyleOptionToolBar::ToolBarFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolBar_ToolBarFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionToolBar::ToolBarFeatures::Int() == a0->operator QStyleOptionToolBar::ToolBarFeatures::Int());
#line 142 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp"
            sipReleaseType(const_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(a0),sipType_QStyleOptionToolBar_ToolBarFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QStyleOptionToolBar_ToolBarFeatures, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionToolBar_ToolBarFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolBar_ToolBarFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QStyleOptionToolBar::ToolBarFeatures(*sipCpp ^ a0);
#line 181 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QStyleOptionToolBar::ToolBarFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionToolBar_ToolBarFeatures, &a0, &a0State, &a1))
        {
             ::QStyleOptionToolBar::ToolBarFeatures*sipRes;

            sipRes = new  ::QStyleOptionToolBar::ToolBarFeatures((*a0 ^ a1));
            sipReleaseType(a0,sipType_QStyleOptionToolBar_ToolBarFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolBar_ToolBarFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionToolBar_ToolBarFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolBar_ToolBarFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QStyleOptionToolBar::ToolBarFeatures(*sipCpp | a0);
#line 253 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QStyleOptionToolBar::ToolBarFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionToolBar_ToolBarFeatures, &a0, &a0State, &a1))
        {
             ::QStyleOptionToolBar::ToolBarFeatures*sipRes;

            sipRes = new  ::QStyleOptionToolBar::ToolBarFeatures((*a0 | a1));
            sipReleaseType(a0,sipType_QStyleOptionToolBar_ToolBarFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolBar_ToolBarFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionToolBar_ToolBarFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolBar_ToolBarFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QStyleOptionToolBar::ToolBarFeatures::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QStyleOptionToolBar::ToolBarFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionToolBar_ToolBarFeatures, &a0, &a0State, &a1))
        {
             ::QStyleOptionToolBar::ToolBarFeatures*sipRes;

            sipRes = new  ::QStyleOptionToolBar::ToolBarFeatures((*a0 & a1));
            sipReleaseType(a0,sipType_QStyleOptionToolBar_ToolBarFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolBar_ToolBarFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___invert__(PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___invert__(PyObject *sipSelf)
{
     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolBar_ToolBarFeatures));

    if (!sipCpp)
        return 0;


    {
        {
             ::QStyleOptionToolBar::ToolBarFeatures*sipRes;

            sipRes = new  ::QStyleOptionToolBar::ToolBarFeatures(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolBar_ToolBarFeatures,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___int__(PyObject *);}
static PyObject *slot_QStyleOptionToolBar_ToolBarFeatures___int__(PyObject *sipSelf)
{
     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolBar_ToolBarFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolBar_ToolBarFeatures(void *, int);}
static void release_QStyleOptionToolBar_ToolBarFeatures(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionToolBar_ToolBarFeatures(void *, SIP_SSIZE_T, void *);}
static void assign_QStyleOptionToolBar_ToolBarFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolBar_ToolBarFeatures(SIP_SSIZE_T);}
static void *array_QStyleOptionToolBar_ToolBarFeatures(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleOptionToolBar::ToolBarFeatures[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolBar_ToolBarFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolBar_ToolBarFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleOptionToolBar::ToolBarFeatures(reinterpret_cast<const  ::QStyleOptionToolBar::ToolBarFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolBar_ToolBarFeatures(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolBar_ToolBarFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionToolBar_ToolBarFeatures(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionToolBar_ToolBarFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionToolBar_ToolBarFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionToolBar::ToolBarFeatures *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionToolBar::ToolBarFeatures();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QStyleOptionToolBar::ToolBarFeatures(a0);

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionToolBar::ToolBarFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionToolBar_ToolBarFeatures, &a0, &a0State))
        {
            sipCpp = new  ::QStyleOptionToolBar::ToolBarFeatures(*a0);
            sipReleaseType(const_cast< ::QStyleOptionToolBar::ToolBarFeatures *>(a0),sipType_QStyleOptionToolBar_ToolBarFeatures,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionToolBar_ToolBarFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionToolBar_ToolBarFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QStyleOptionToolBar::ToolBarFeatures **sipCppPtr = reinterpret_cast< ::QStyleOptionToolBar::ToolBarFeatures **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionToolBar::ToolBarFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionToolBar_ToolBarFeature)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionToolBar_ToolBarFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionToolBar_ToolBarFeature)))
{
    *sipCppPtr = new QStyleOptionToolBar::ToolBarFeatures(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionToolBar::ToolBarFeatures *>(sipConvertToType(sipPy, sipType_QStyleOptionToolBar_ToolBarFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionToolBar_ToolBarFeatures[] = {
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___hash__, hash_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___bool__, bool_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___ne__, ne_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___eq__, eq_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___xor__, xor_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___ior__, ior_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___or__, or_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___iand__, iand_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___and__, and_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___invert__, invert_slot},
    {(void *)slot_QStyleOptionToolBar_ToolBarFeatures___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionToolBar_ToolBarFeatures, "\1QStyleOptionToolBar.ToolBarFeatures()\n"
"QStyleOptionToolBar.ToolBarFeatures(Union[QStyleOptionToolBar.ToolBarFeatures, QStyleOptionToolBar.ToolBarFeature])\n"
"QStyleOptionToolBar.ToolBarFeatures(QStyleOptionToolBar.ToolBarFeatures)");


static pyqt5ClassPluginDef plugin_QStyleOptionToolBar_ToolBarFeatures = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionToolBar_ToolBarFeatures = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolBar__ToolBarFeatures,
        {0},
        &plugin_QStyleOptionToolBar_ToolBarFeatures
    },
    {
        sipNameNr_ToolBarFeatures,
        {386, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionToolBar_ToolBarFeatures,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionToolBar_ToolBarFeatures,
    init_type_QStyleOptionToolBar_ToolBarFeatures,
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
    dealloc_QStyleOptionToolBar_ToolBarFeatures,
    assign_QStyleOptionToolBar_ToolBarFeatures,
    array_QStyleOptionToolBar_ToolBarFeatures,
    copy_QStyleOptionToolBar_ToolBarFeatures,
    release_QStyleOptionToolBar_ToolBarFeatures,
    0,
    convertTo_QStyleOptionToolBar_ToolBarFeatures,
    0,
    0,
    0,
    0,
    0
};
