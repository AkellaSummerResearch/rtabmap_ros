/*
 * PreferencesDialogROS.h
 *
 *  Created on: 4 févr. 2010
 *      Author: labm2414
 */

#ifndef PREFERENCESDIALOGROS_H_
#define PREFERENCESDIALOGROS_H_

#include <ros/ros.h>
#include <rtabmap/gui/PreferencesDialog.h>

using namespace rtabmap;

class PreferencesDialogROS : public PreferencesDialog
{
public:
	PreferencesDialogROS(const QString & configFile);
	virtual ~PreferencesDialogROS();

	virtual QString getIniFilePath() const;

protected:
	virtual QString getParamMessage();

	virtual void readCameraSettings(const QString & filePath);
	virtual bool readCoreSettings(const QString & filePath);
	virtual void writeSettings(const QString & filePath);

private:
	QString configFile_;
};

#endif /* PREFERENCESDIALOGROS_H_ */
