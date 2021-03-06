/***************************************************************************
    qgsmeshdatasetgrouptreewidget.h
    -------------------------------
    begin                : May 2020
    copyright            : (C) 2020 by Vincent Cloarec
    email                : vcloarec at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSMESHDATASETGROUPTREEWIDGET_H
#define QGSMESHDATASETGROUPTREEWIDGET_H

#include "qgis_app.h"
#include "ui_qgsmeshdatasetgrouptreewidgetbase.h"

#include "qgsmeshdataset.h"

class QgsMeshLayer;

class APP_EXPORT QgsMeshDatasetGroupTreeWidget: public QWidget, private Ui::QgsMeshDatasetGroupTreeWidgetBase
{
    Q_OBJECT
  public:
    //! Constructor
    QgsMeshDatasetGroupTreeWidget( QWidget *parent = nullptr );

    //! Synchronizes widgets state with associated mesh layer
    void syncToLayer( QgsMeshLayer *meshLayer );

    //! Apply the dataset group tree item to the layer
    void apply();

  signals:
    void datasetGroupAdded();

  private slots:
    void addDataset();

  private:
    QgsMeshLayer *mMeshLayer;
};

#endif // QGSMESHDATASETGROUPTREEWIDGET_H
