/********************************************************************************
** Form generated from reading UI file 'Registration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegistrationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelDescription;
    QGridLayout *gridLayout;
    QLabel *labelLockID;
    QPlainTextEdit *textLockID;
    QLabel *labelUnlockKey;
    QPlainTextEdit *textUnlockKey;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RegistrationDialog)
    {
        if (RegistrationDialog->objectName().isEmpty())
            RegistrationDialog->setObjectName(QStringLiteral("RegistrationDialog"));
        RegistrationDialog->resize(358, 227);
        verticalLayout = new QVBoxLayout(RegistrationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelDescription = new QLabel(RegistrationDialog);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));
        labelDescription->setWordWrap(true);

        verticalLayout->addWidget(labelDescription);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelLockID = new QLabel(RegistrationDialog);
        labelLockID->setObjectName(QStringLiteral("labelLockID"));

        gridLayout->addWidget(labelLockID, 0, 0, 1, 1);

        textLockID = new QPlainTextEdit(RegistrationDialog);
        textLockID->setObjectName(QStringLiteral("textLockID"));
        textLockID->setMinimumSize(QSize(0, 40));
        textLockID->setReadOnly(true);

        gridLayout->addWidget(textLockID, 0, 1, 1, 1);

        labelUnlockKey = new QLabel(RegistrationDialog);
        labelUnlockKey->setObjectName(QStringLiteral("labelUnlockKey"));

        gridLayout->addWidget(labelUnlockKey, 1, 0, 1, 1);

        textUnlockKey = new QPlainTextEdit(RegistrationDialog);
        textUnlockKey->setObjectName(QStringLiteral("textUnlockKey"));
        textUnlockKey->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(textUnlockKey, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(RegistrationDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(RegistrationDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(RegistrationDialog);
        QObject::connect(okButton, SIGNAL(clicked()), RegistrationDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), RegistrationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RegistrationDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistrationDialog)
    {
        RegistrationDialog->setWindowTitle(QApplication::translate("RegistrationDialog", "Dialog", Q_NULLPTR));
        labelDescription->setText(QApplication::translate("RegistrationDialog", "No unlock key could be found for this Radar, please enter the unlock key and press OK", Q_NULLPTR));
        labelLockID->setText(QApplication::translate("RegistrationDialog", "Lock ID", Q_NULLPTR));
        labelUnlockKey->setText(QApplication::translate("RegistrationDialog", "Unlock Key", Q_NULLPTR));
        okButton->setText(QApplication::translate("RegistrationDialog", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("RegistrationDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegistrationDialog: public Ui_RegistrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
