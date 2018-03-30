TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT += widgets
CONFIG += release
CONFIG -= android_install
TARGET = QtWidgets

win32 {
    PY_MODULE = QtWidgets.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtWidgets.so

    macx {
        PY_MODULE_SRC = $(TARGET).plugin/Contents/MacOS/$(TARGET)

        QMAKE_LFLAGS += "-undefined dynamic_lookup"

        equals(QT_MINOR_VERSION, 5) {
            QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
        }
    } else {
        PY_MODULE_SRC = $(TARGET)
    }
}

QMAKE_POST_LINK = $(COPY_FILE) $$PY_MODULE_SRC $$PY_MODULE

target.CONFIG = no_check_exist
target.files = $$PY_MODULE

target.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += target
QMAKE_LFLAGS += -Wl,--version-script=QtWidgets.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.5m
win32 {
    LIBS += -L/usr/lib/arm-linux-gnueabihf
}
DEFINES += Py_LIMITED_API=0x03040000
INCLUDEPATH += ../qpy/QtWidgets
HEADERS = sipAPIQtWidgets.h ../qpy/QtWidgets/qpywidgets_api.h ../qpy/QtWidgets/qpywidgets_chimera_helpers.h
SOURCES = sipQtWidgetsQAbstractButton.cpp sipQtWidgetsQAbstractGraphicsShapeItem.cpp sipQtWidgetsQAbstractItemDelegate.cpp sipQtWidgetsQAbstractItemView.cpp sipQtWidgetsQAbstractItemViewEditTriggers.cpp sipQtWidgetsQAbstractScrollArea.cpp sipQtWidgetsQAbstractSlider.cpp sipQtWidgetsQAbstractSpinBox.cpp sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp sipQtWidgetsQAction.cpp sipQtWidgetsQActionGroup.cpp sipQtWidgetsQApplication.cpp sipQtWidgetsQBoxLayout.cpp sipQtWidgetsQButtonGroup.cpp sipQtWidgetsQCalendarWidget.cpp sipQtWidgetsQCheckBox.cpp sipQtWidgetsQColorDialog.cpp sipQtWidgetsQColorDialogColorDialogOptions.cpp sipQtWidgetsQColumnView.cpp sipQtWidgetsQComboBox.cpp sipQtWidgetsQCommandLinkButton.cpp sipQtWidgetsQCommonStyle.cpp sipQtWidgetsQCompleter.cpp sipQtWidgetsQDataWidgetMapper.cpp sipQtWidgetsQDateEdit.cpp sipQtWidgetsQDateTimeEdit.cpp sipQtWidgetsQDateTimeEditSections.cpp sipQtWidgetsQDesktopWidget.cpp sipQtWidgetsQDial.cpp sipQtWidgetsQDialog.cpp sipQtWidgetsQDialogButtonBox.cpp sipQtWidgetsQDialogButtonBoxStandardButtons.cpp sipQtWidgetsQDirModel.cpp sipQtWidgetsQDockWidget.cpp sipQtWidgetsQDockWidgetDockWidgetFeatures.cpp sipQtWidgetsQDoubleSpinBox.cpp sipQtWidgetsQErrorMessage.cpp sipQtWidgetsQFileDialog.cpp sipQtWidgetsQFileDialogOptions.cpp sipQtWidgetsQFileIconProvider.cpp sipQtWidgetsQFileIconProviderOptions.cpp sipQtWidgetsQFileSystemModel.cpp sipQtWidgetsQFocusFrame.cpp sipQtWidgetsQFontComboBox.cpp sipQtWidgetsQFontComboBoxFontFilters.cpp sipQtWidgetsQFontDialog.cpp sipQtWidgetsQFontDialogFontDialogOptions.cpp sipQtWidgetsQFormLayout.cpp sipQtWidgetsQFrame.cpp sipQtWidgetsQGesture.cpp sipQtWidgetsQGestureEvent.cpp sipQtWidgetsQGestureRecognizer.cpp sipQtWidgetsQGestureRecognizerResult.cpp sipQtWidgetsQGraphicsAnchor.cpp sipQtWidgetsQGraphicsAnchorLayout.cpp sipQtWidgetsQGraphicsBlurEffect.cpp sipQtWidgetsQGraphicsBlurEffectBlurHints.cpp sipQtWidgetsQGraphicsColorizeEffect.cpp sipQtWidgetsQGraphicsDropShadowEffect.cpp sipQtWidgetsQGraphicsEffect.cpp sipQtWidgetsQGraphicsEffectChangeFlags.cpp sipQtWidgetsQGraphicsEllipseItem.cpp sipQtWidgetsQGraphicsGridLayout.cpp sipQtWidgetsQGraphicsItem.cpp sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp sipQtWidgetsQGraphicsItemGroup.cpp sipQtWidgetsQGraphicsLayout.cpp sipQtWidgetsQGraphicsLayoutItem.cpp sipQtWidgetsQGraphicsLineItem.cpp sipQtWidgetsQGraphicsLinearLayout.cpp sipQtWidgetsQGraphicsObject.cpp sipQtWidgetsQGraphicsOpacityEffect.cpp sipQtWidgetsQGraphicsPathItem.cpp sipQtWidgetsQGraphicsPixmapItem.cpp sipQtWidgetsQGraphicsPolygonItem.cpp sipQtWidgetsQGraphicsProxyWidget.cpp sipQtWidgetsQGraphicsRectItem.cpp sipQtWidgetsQGraphicsRotation.cpp sipQtWidgetsQGraphicsScale.cpp sipQtWidgetsQGraphicsScene.cpp sipQtWidgetsQGraphicsSceneContextMenuEvent.cpp sipQtWidgetsQGraphicsSceneDragDropEvent.cpp sipQtWidgetsQGraphicsSceneEvent.cpp sipQtWidgetsQGraphicsSceneHelpEvent.cpp sipQtWidgetsQGraphicsSceneHoverEvent.cpp sipQtWidgetsQGraphicsSceneMouseEvent.cpp sipQtWidgetsQGraphicsSceneMoveEvent.cpp sipQtWidgetsQGraphicsSceneResizeEvent.cpp sipQtWidgetsQGraphicsSceneSceneLayers.cpp sipQtWidgetsQGraphicsSceneWheelEvent.cpp sipQtWidgetsQGraphicsSimpleTextItem.cpp sipQtWidgetsQGraphicsTextItem.cpp sipQtWidgetsQGraphicsTransform.cpp sipQtWidgetsQGraphicsView.cpp sipQtWidgetsQGraphicsViewCacheMode.cpp sipQtWidgetsQGraphicsViewOptimizationFlags.cpp sipQtWidgetsQGraphicsWidget.cpp sipQtWidgetsQGridLayout.cpp sipQtWidgetsQGroupBox.cpp sipQtWidgetsQHBoxLayout.cpp sipQtWidgetsQHeaderView.cpp sipQtWidgetsQInputDialog.cpp sipQtWidgetsQInputDialogInputDialogOptions.cpp sipQtWidgetsQItemDelegate.cpp sipQtWidgetsQItemEditorCreatorBase.cpp sipQtWidgetsQItemEditorFactory.cpp sipQtWidgetsQKeyEventTransition.cpp sipQtWidgetsQKeySequenceEdit.cpp sipQtWidgetsQLCDNumber.cpp sipQtWidgetsQLabel.cpp sipQtWidgetsQLayout.cpp sipQtWidgetsQLayoutItem.cpp sipQtWidgetsQLineEdit.cpp sipQtWidgetsQList0100QRectF.cpp sipQtWidgetsQList0100QTableWidgetSelectionRange.cpp sipQtWidgetsQList0100QTextEditExtraSelection.cpp sipQtWidgetsQList0100QWizardWizardButton.cpp sipQtWidgetsQList0101QAbstractButton.cpp sipQtWidgetsQList0101QAction.cpp sipQtWidgetsQList0101QDockWidget.cpp sipQtWidgetsQList0101QGesture.cpp sipQtWidgetsQList0101QGraphicsItem.cpp sipQtWidgetsQList0101QGraphicsTransform.cpp sipQtWidgetsQList0101QGraphicsView.cpp sipQtWidgetsQList0101QGraphicsWidget.cpp sipQtWidgetsQList0101QListWidgetItem.cpp sipQtWidgetsQList0101QMdiSubWindow.cpp sipQtWidgetsQList0101QScroller.cpp sipQtWidgetsQList0101QTableWidgetItem.cpp sipQtWidgetsQList0101QTreeWidgetItem.cpp sipQtWidgetsQList0101QUndoStack.cpp sipQtWidgetsQList0101QWidget.cpp sipQtWidgetsQListView.cpp sipQtWidgetsQListWidget.cpp sipQtWidgetsQListWidgetItem.cpp sipQtWidgetsQMainWindow.cpp sipQtWidgetsQMainWindowDockOptions.cpp sipQtWidgetsQMap0100QDate0100QTextCharFormat.cpp sipQtWidgetsQMdiArea.cpp sipQtWidgetsQMdiAreaAreaOptions.cpp sipQtWidgetsQMdiSubWindow.cpp sipQtWidgetsQMdiSubWindowSubWindowOptions.cpp sipQtWidgetsQMenu.cpp sipQtWidgetsQMenuBar.cpp sipQtWidgetsQMessageBox.cpp sipQtWidgetsQMessageBoxStandardButtons.cpp sipQtWidgetsQMouseEventTransition.cpp sipQtWidgetsQOpenGLWidget.cpp sipQtWidgetsQPanGesture.cpp sipQtWidgetsQPinchGesture.cpp sipQtWidgetsQPinchGestureChangeFlags.cpp sipQtWidgetsQPlainTextDocumentLayout.cpp sipQtWidgetsQPlainTextEdit.cpp sipQtWidgetsQProgressBar.cpp sipQtWidgetsQProgressDialog.cpp sipQtWidgetsQProxyStyle.cpp sipQtWidgetsQPushButton.cpp sipQtWidgetsQRadioButton.cpp sipQtWidgetsQRubberBand.cpp sipQtWidgetsQScrollArea.cpp sipQtWidgetsQScrollBar.cpp sipQtWidgetsQScroller.cpp sipQtWidgetsQScrollerProperties.cpp sipQtWidgetsQShortcut.cpp sipQtWidgetsQSizeGrip.cpp sipQtWidgetsQSizePolicy.cpp sipQtWidgetsQSizePolicyControlTypes.cpp sipQtWidgetsQSlider.cpp sipQtWidgetsQSpacerItem.cpp sipQtWidgetsQSpinBox.cpp sipQtWidgetsQSplashScreen.cpp sipQtWidgetsQSplitter.cpp sipQtWidgetsQSplitterHandle.cpp sipQtWidgetsQStackedLayout.cpp sipQtWidgetsQStackedWidget.cpp sipQtWidgetsQStatusBar.cpp sipQtWidgetsQStyle.cpp sipQtWidgetsQStyleFactory.cpp sipQtWidgetsQStyleHintReturn.cpp sipQtWidgetsQStyleHintReturnMask.cpp sipQtWidgetsQStyleHintReturnVariant.cpp sipQtWidgetsQStyleOption.cpp sipQtWidgetsQStyleOptionButton.cpp sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp sipQtWidgetsQStyleOptionComboBox.cpp sipQtWidgetsQStyleOptionComplex.cpp sipQtWidgetsQStyleOptionDockWidget.cpp sipQtWidgetsQStyleOptionFocusRect.cpp sipQtWidgetsQStyleOptionFrame.cpp sipQtWidgetsQStyleOptionFrameFrameFeatures.cpp sipQtWidgetsQStyleOptionGraphicsItem.cpp sipQtWidgetsQStyleOptionGroupBox.cpp sipQtWidgetsQStyleOptionHeader.cpp sipQtWidgetsQStyleOptionMenuItem.cpp sipQtWidgetsQStyleOptionProgressBar.cpp sipQtWidgetsQStyleOptionRubberBand.cpp sipQtWidgetsQStyleOptionSizeGrip.cpp sipQtWidgetsQStyleOptionSlider.cpp sipQtWidgetsQStyleOptionSpinBox.cpp sipQtWidgetsQStyleOptionTab.cpp sipQtWidgetsQStyleOptionTabBarBase.cpp sipQtWidgetsQStyleOptionTabCornerWidgets.cpp sipQtWidgetsQStyleOptionTabTabFeatures.cpp sipQtWidgetsQStyleOptionTabWidgetFrame.cpp sipQtWidgetsQStyleOptionTitleBar.cpp sipQtWidgetsQStyleOptionToolBar.cpp sipQtWidgetsQStyleOptionToolBarToolBarFeatures.cpp sipQtWidgetsQStyleOptionToolBox.cpp sipQtWidgetsQStyleOptionToolButton.cpp sipQtWidgetsQStyleOptionToolButtonToolButtonFeatures.cpp sipQtWidgetsQStyleOptionViewItem.cpp sipQtWidgetsQStyleOptionViewItemViewItemFeatures.cpp sipQtWidgetsQStylePainter.cpp sipQtWidgetsQStyleState.cpp sipQtWidgetsQStyleSubControls.cpp sipQtWidgetsQStyledItemDelegate.cpp sipQtWidgetsQSwipeGesture.cpp sipQtWidgetsQSystemTrayIcon.cpp sipQtWidgetsQTabBar.cpp sipQtWidgetsQTabWidget.cpp sipQtWidgetsQTableView.cpp sipQtWidgetsQTableWidget.cpp sipQtWidgetsQTableWidgetItem.cpp sipQtWidgetsQTableWidgetSelectionRange.cpp sipQtWidgetsQTapAndHoldGesture.cpp sipQtWidgetsQTapGesture.cpp sipQtWidgetsQTextBrowser.cpp sipQtWidgetsQTextEdit.cpp sipQtWidgetsQTextEditAutoFormatting.cpp sipQtWidgetsQTextEditExtraSelection.cpp sipQtWidgetsQTimeEdit.cpp sipQtWidgetsQToolBar.cpp sipQtWidgetsQToolBox.cpp sipQtWidgetsQToolButton.cpp sipQtWidgetsQToolTip.cpp sipQtWidgetsQTreeView.cpp sipQtWidgetsQTreeWidget.cpp sipQtWidgetsQTreeWidgetItem.cpp sipQtWidgetsQTreeWidgetItemIterator.cpp sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp sipQtWidgetsQUndoCommand.cpp sipQtWidgetsQUndoGroup.cpp sipQtWidgetsQUndoStack.cpp sipQtWidgetsQUndoView.cpp sipQtWidgetsQVBoxLayout.cpp sipQtWidgetsQWhatsThis.cpp sipQtWidgetsQWidget.cpp sipQtWidgetsQWidgetAction.cpp sipQtWidgetsQWidgetItem.cpp sipQtWidgetsQWidgetRenderFlags.cpp sipQtWidgetsQWizard.cpp sipQtWidgetsQWizardPage.cpp sipQtWidgetsQWizardWizardOptions.cpp sipQtWidgetscmodule.cpp ../qpy/QtWidgets/qpywidgets_chimera_helpers.cpp ../qpy/QtWidgets/qpywidgets_post_init.cpp
