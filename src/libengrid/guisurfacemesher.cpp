// 
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +                                                                      +
// + This file is part of enGrid.                                         +
// +                                                                      +
// + Copyright 2008-2013 enGits GmbH                                      +
// +                                                                      +
// + enGrid is free software: you can redistribute it and/or modify       +
// + it under the terms of the GNU General Public License as published by +
// + the Free Software Foundation, either version 3 of the License, or    +
// + (at your option) any later version.                                  +
// +                                                                      +
// + enGrid is distributed in the hope that it will be useful,            +
// + but WITHOUT ANY WARRANTY; without even the implied warranty of       +
// + MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        +
// + GNU General Public License for more details.                         +
// +                                                                      +
// + You should have received a copy of the GNU General Public License    +
// + along with enGrid. If not, see <http://www.gnu.org/licenses/>.       +
// +                                                                      +
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// 
#include "guisurfacemesher.h"

void GuiSurfaceMesher::before()
{
  m_Ui.m_SpinBoxIterations->setValue(m_NumMaxIter);
  m_Ui.m_SpinBoxDelaunaySweeps->setValue(m_NumDelaunaySweeps);
  m_Ui.m_SpinBoxSmoothSteps->setValue(m_NumSmoothSteps);
  m_Ui.m_CheckBoxSmooth->setChecked(m_CorrectCurvature);
  m_Ui.m_CheckBoxBCodesFeatures->setChecked(m_BCodeFeatureDefinition);
}

void GuiSurfaceMesher::operate()
{
  setMaxNumIterations(m_Ui.m_SpinBoxIterations->value());
  setNumDelaunaySweeps(m_Ui.m_SpinBoxDelaunaySweeps->value());
  setNumSmoothSteps(m_Ui.m_SpinBoxSmoothSteps->value());
  setCorrectCurvature(m_Ui.m_CheckBoxSmooth->isChecked());
  setDeleteNodes(m_Ui.m_CheckBoxDelete->isChecked());
  setInsertNodes(m_Ui.m_CheckBoxInsert->isChecked());
  setBCodesFeatureDefinition(m_Ui.m_CheckBoxBCodesFeatures->isChecked());
  SurfaceMesher::operate();
}
