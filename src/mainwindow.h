#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <QString>
#include <QFile>
#include <QtCore>
#include <QDebug>
#include <QSettings>
#include <updatescriptsdialog.h>//////////
#include <packagesdialog.h>//////////
#include <preferencesdialog.h>//////////

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //0.######## CHECK METHODS
    void checkAllStatus();
    //1.########
    void checkFirewallStatus();
    //2.########
    void checkHiddenStartupItemsStatus();
    //3.########
    void checkupdateNotifStatus();
    //4.########
    void checkSudoWithoutPassStatus();
    //5.########
    void checkAsterisksStatus();
    //6.########
    void checkUpdateAutoStatus();
    //7.########
    void checkHibernationStatus();
    //8.########
    void checkLockScreenStatus();
    //9.########
    void checkLoginSoundStatus();

public slots:

    //void closePackagesDialog();///////////////
    void closeUpdateDialog();///////////////
    void closePreferencesDialog();///////////////

private slots:

    void on_actionManualUpdateDialog_triggered();////////////
    void on_runScriptsManager_released();////////////
    void on_actionPreferences_triggered();////////////

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionAbout_triggered();

    void on_actionTutorial_triggered();    

    void on_updateAndUpgradeButton_clicked();

    void on_dist_upgradeButton_clicked();

    void on_cleanKernelsButton_clicked();

    void on_integrityCheckButton_clicked();

    void on_basicPackagesInstallButton_clicked();

    void on_cleanButton_clicked();

    void on_fixBrokenPackagesButton_1_clicked();

    void on_fixBrokenPackagesButton_2_clicked();

    void on_fixBrokenPackagesButton_3_clicked();

    void on_fixBrokenPackagesButton_4_clicked();

    void on_fixBrokenPackagesButton_5_clicked();

    void on_fixBrokenPackagesButton_6_clicked();

    void on_repairNetworkButton_clicked();

    void on_repairGPGKeys_clicked();    

    void on_upgradeLatestStableButton_clicked();

    void on_upgradeLatestDevButton_clicked();

    void on_installTemplatesButton_clicked();

    void on_openSourcesListDButton_clicked();

    void on_enableSudoWithoutPassSpecificButton_clicked();

    void on_disableSudoWithoutPassSpecificButton_clicked();

    void on_openSudoersFileButton_clicked();

    void on_backupSudoersFileButton_clicked();

    void on_reduceTo5sShutdownTimeoutButton_clicked();

    void on_setToDefaults90sShutdownTimeoutButton_clicked();

    //void on_actionAbout_clicked();
    //void on_updateScriptsButton_clicked();
    //void on_runUpdateDialog_clicked();

    void on_importSudoersFileButton_clicked();

    void on_installMainlineKernels_clicked();

    void on_runGrubcustomizerButton_clicked();

    void on_aptselect_US_clicked();

    void on_aptselect_ES_clicked();

    void on_openSourcesListButton_clicked();

    void on_backupSourcesListButton_clicked();

    void on_importSourcesListButton_clicked();

    void on_openMainBackupButton_clicked();

    void on_openMainRestoreButton_clicked();

    void on_openSudoersDButton_clicked();

    void on_upgradeLatestKernel_1_clicked();

    void on_upgradeLatestKernel_2_clicked();

    void on_purgeMainlineKernels_clicked();

    void on_purgeMainlineKernels_2_clicked();

    void on_openRCLocalButton_clicked();

    void on_resetDconf_clicked();

    void on_unlock_var_lib_dpkg_lock_clicked();

    void on_openHostsButton_clicked();

    void on_actionSeeReleases_triggered();

    void on_actionUpdateApp_triggered();

    void on_actionDefaultUpdateUpgradePackages_triggered();

    void on_actionDefaultUpdateUpgradeSmartPackages_triggered();

    void on_actionTwitter_triggered();

    void on_openCronButton_clicked();

    void on_eraseCronButton_clicked();

    void on_checkBox_firewall_clicked(bool checked);

    void on_checkBoxUpdateNotif_clicked(bool checked);

    void on_checkBoxSudoWOPass_clicked(bool checked);

    void on_checkBoxAsterisks_clicked(bool checked);

    void on_checkBoxUpdateAuto_clicked(bool checked);

    void on_checkBoxHibernation_clicked(bool checked);

    void on_checkBoxLockScreen_clicked(bool checked);

    void on_checkBoxHiddenStartupItems_clicked(bool checked);

    void on_checkBoxLoginSound_clicked(bool checked);

    void on_restoreToDefaultsButton_clicked();

    void on_enterUnofficialReposButton_clicked();

    void on_saveReposButton_clicked();

private:
    Ui::MainWindow *ui;
    UpdateScriptsDialog *UpdateScriptsDialogUi;/////////////
    PackagesDialog *PackagesDialogUi;/////////////
    PreferencesDialog *PreferencesDialogUi;/////////////
};

#endif // MAINWINDOW_H
