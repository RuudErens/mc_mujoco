#pragma once

#include "details/TransformBase.h"

namespace mc_mujoco
{

struct TransformWidget : public TransformBase<ControlAxis::ALL>
{
  TransformWidget(Client & client, const ElementId & id, const ElementId & reqId) : TransformBase(client, id, reqId) {}

  void draw3D() override
  {
    if(!show_)
    {
      return;
    }
<<<<<<< Updated upstream

=======

>>>>>>> Stashed changes
    TransformBase::draw3D();
    mclient_.draw_frame(marker_.pose());
  }

  void draw2D() override
  {
    ImGui::Checkbox(label(fmt::format("Show {}", id.name)).c_str(), &show_);
  }

<<<<<<< Updated upstream

private:
  bool show_ = true;
=======

private:
  bool show_ = false;
>>>>>>> Stashed changes
};

} // namespace mc_mujoco
