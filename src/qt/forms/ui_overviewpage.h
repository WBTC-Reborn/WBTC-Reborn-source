/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QFrame *frame_BG;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_Master;
    QFrame *frame_Header;
    QVBoxLayout *verticalLayout_Header;
    QHBoxLayout *horizontalLayout_Header;
    QSpacerItem *horizontalSpacer_Header;
    QLabel *labelOverviewHeaderRight;
    QFrame *frame_Content;
    QVBoxLayout *verticalLayout_Content;
    QHBoxLayout *horizontalLayout_Content;
    QVBoxLayout *verticalLayout_left;
    QFrame *frameBalances;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hlBalancesHeader;
    QLabel *labelBalances;
    QLabel *labelWalletStatus;
    QSpacerItem *hsBalancesHeader;
    QFrame *lineBalances;
    QGridLayout *gridLayout;
    QLabel *labelWatchPending;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchImmature;
    QLabel *labelTotalText;
    QLabel *labelImmature;
    QSpacerItem *hsBalances;
    QLabel *labelImmatureText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelSpendable;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_right;
    QFrame *frame_RecentTransactions;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelAlerts;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(1370, 701);
        OverviewPage->setMinimumSize(QSize(1269, 700));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        OverviewPage->setFont(font);
        OverviewPage->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(-1, -1, 9, -1);
        frame_BG = new QFrame(OverviewPage);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        frame_BG->setMinimumSize(QSize(1269, 700));
        frame_BG->setMaximumSize(QSize(16777215, 16777215));
        frame_BG->setFrameShape(QFrame::StyledPanel);
        frame_BG->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_BG);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 6);
        verticalLayout_Master = new QVBoxLayout();
        verticalLayout_Master->setObjectName(QStringLiteral("verticalLayout_Master"));
        verticalLayout_Master->setContentsMargins(0, 0, 0, 0);
        frame_Header = new QFrame(frame_BG);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        verticalLayout_Header = new QVBoxLayout(frame_Header);
        verticalLayout_Header->setObjectName(QStringLiteral("verticalLayout_Header"));
        verticalLayout_Header->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setSpacing(6);
        horizontalLayout_Header->setObjectName(QStringLiteral("horizontalLayout_Header"));
        horizontalSpacer_Header = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer_Header);

        labelOverviewHeaderRight = new QLabel(frame_Header);
        labelOverviewHeaderRight->setObjectName(QStringLiteral("labelOverviewHeaderRight"));
        labelOverviewHeaderRight->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderRight->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(14);
        labelOverviewHeaderRight->setFont(font1);
        labelOverviewHeaderRight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_Header->addWidget(labelOverviewHeaderRight);

        horizontalLayout_Header->setStretch(0, 1);

        verticalLayout_Header->addLayout(horizontalLayout_Header);


        verticalLayout_Master->addWidget(frame_Header);

        frame_Content = new QFrame(frame_BG);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        verticalLayout_Content = new QVBoxLayout(frame_Content);
        verticalLayout_Content->setObjectName(QStringLiteral("verticalLayout_Content"));
        verticalLayout_Content->setContentsMargins(6, 0, 6, 0);
        horizontalLayout_Content = new QHBoxLayout();
        horizontalLayout_Content->setSpacing(6);
        horizontalLayout_Content->setObjectName(QStringLiteral("horizontalLayout_Content"));
        verticalLayout_left = new QVBoxLayout();
        verticalLayout_left->setObjectName(QStringLiteral("verticalLayout_left"));
        frameBalances = new QFrame(frame_Content);
        frameBalances->setObjectName(QStringLiteral("frameBalances"));
        frameBalances->setFrameShape(QFrame::StyledPanel);
        frameBalances->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frameBalances);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        hlBalancesHeader = new QHBoxLayout();
        hlBalancesHeader->setSpacing(6);
        hlBalancesHeader->setObjectName(QStringLiteral("hlBalancesHeader"));
        labelBalances = new QLabel(frameBalances);
        labelBalances->setObjectName(QStringLiteral("labelBalances"));
        labelBalances->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        labelBalances->setFont(font2);

        hlBalancesHeader->addWidget(labelBalances);

        labelWalletStatus = new QLabel(frameBalances);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hlBalancesHeader->addWidget(labelWalletStatus);

        hsBalancesHeader = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlBalancesHeader->addItem(hsBalancesHeader);

        hlBalancesHeader->setStretch(0, 2);

        verticalLayout_4->addLayout(hlBalancesHeader);

        lineBalances = new QFrame(frameBalances);
        lineBalances->setObjectName(QStringLiteral("lineBalances"));
        lineBalances->setMinimumSize(QSize(0, 1));
        lineBalances->setMaximumSize(QSize(16777215, 1));
        lineBalances->setFrameShape(QFrame::HLine);
        lineBalances->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(lineBalances);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelWatchPending = new QLabel(frameBalances);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        labelWatchPending->setFont(font3);
        labelWatchPending->setCursor(QCursor(Qt::ArrowCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 WBTC"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelUnconfirmed = new QLabel(frameBalances);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font3);
        labelUnconfirmed->setCursor(QCursor(Qt::ArrowCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 WBTC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchImmature = new QLabel(frameBalances);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font3);
        labelWatchImmature->setCursor(QCursor(Qt::ArrowCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 WBTC"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        labelTotalText = new QLabel(frameBalances);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));
        labelTotalText->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelTotalText, 4, 0, 1, 1);

        labelImmature = new QLabel(frameBalances);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font3);
        labelImmature->setCursor(QCursor(Qt::ArrowCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 WBTC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        hsBalances = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(hsBalances, 2, 3, 1, 1);

        labelImmatureText = new QLabel(frameBalances);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));
        labelImmatureText->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelTotal = new QLabel(frameBalances);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font3);
        labelTotal->setCursor(QCursor(Qt::ArrowCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 WBTC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelTotal, 4, 1, 1, 1);

        labelWatchTotal = new QLabel(frameBalances);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font3);
        labelWatchTotal->setCursor(QCursor(Qt::ArrowCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 WBTC"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWatchTotal, 4, 2, 1, 1);

        labelWatchonly = new QLabel(frameBalances);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frameBalances);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));
        labelBalanceText->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frameBalances);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font3);
        labelBalance->setCursor(QCursor(Qt::ArrowCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 WBTC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWatchAvailable = new QLabel(frameBalances);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font3);
        labelWatchAvailable->setCursor(QCursor(Qt::ArrowCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 WBTC"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frameBalances);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));
        labelPendingText->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelSpendable = new QLabel(frameBalances);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_left->addWidget(frameBalances);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_left->addItem(verticalSpacer);


        horizontalLayout_Content->addLayout(verticalLayout_left);

        verticalLayout_right = new QVBoxLayout();
        verticalLayout_right->setObjectName(QStringLiteral("verticalLayout_right"));
        frame_RecentTransactions = new QFrame(frame_Content);
        frame_RecentTransactions->setObjectName(QStringLiteral("frame_RecentTransactions"));
        frame_RecentTransactions->setMinimumSize(QSize(0, 0));
        frame_RecentTransactions->setFrameShape(QFrame::StyledPanel);
        frame_RecentTransactions->setFrameShadow(QFrame::Raised);
        verticalLayout_1 = new QVBoxLayout(frame_RecentTransactions);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_RecentTransactions);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 20));
        label_4->setFont(font2);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_RecentTransactions);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 2);

        verticalLayout_1->addLayout(horizontalLayout_2);

        line = new QFrame(frame_RecentTransactions);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 1));
        line->setMaximumSize(QSize(16777215, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_1->addWidget(line);

        listTransactions = new QListView(frame_RecentTransactions);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setMinimumSize(QSize(0, 0));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_1->addWidget(listTransactions);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer_2);

        labelAlerts = new QLabel(frame_RecentTransactions);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setMaximumSize(QSize(16777215, 16777215));
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        verticalLayout_1->addWidget(labelAlerts);


        verticalLayout_right->addWidget(frame_RecentTransactions);

        verticalLayout_right->setStretch(0, 1);

        horizontalLayout_Content->addLayout(verticalLayout_right);

        horizontalLayout_Content->setStretch(0, 1);
        horizontalLayout_Content->setStretch(1, 1);

        verticalLayout_Content->addLayout(horizontalLayout_Content);


        verticalLayout_Master->addWidget(frame_Content);

        verticalLayout_Master->setStretch(1, 1);

        verticalLayout_3->addLayout(verticalLayout_Master);


        topLayout->addWidget(frame_BG);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        labelOverviewHeaderRight->setText(QString());
        labelBalances->setText(QApplication::translate("OverviewPage", "WBTC Balances", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the WBTC network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending", Q_NULLPTR));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the WBTC network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelAlerts->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
