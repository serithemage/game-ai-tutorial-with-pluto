
void FUN_14000f1f0(longlong param_1,longlong param_2)

{
  FUN_14000ed00(param_2,"continuous_proj.0.weight",1,0x6d,"continuous unit features");
  FUN_14000ed00(param_2,"global_proj.0.weight",1,0x124,"global features");
  FUN_14000ed00(param_2,"action_hist_proj.0.weight",1,(longlong)*(int *)(param_1 + 0x3a0) * 4,
                "action-history window");
  FUN_14000ed00(param_2,"action_head.weight",0,0x14,"action space");
  FUN_14000ed00(param_2,"last_action_emb.weight",0,0x14,"action space");
  FUN_14000ed00(param_2,"action_hist_emb.weight",0,0x14,"action space");
  FUN_14000ed00(param_2,"action_cond_emb.weight",0,0x14,"action space");
  FUN_14000ed00(param_2,"arg_head.weight",0,0xe9,"argument space");
  FUN_14000ed00(param_2,"arg_cond_emb.weight",0,0xe9,"argument space");
  FUN_14000ed00(param_2,"owner_emb.weight",0,3,"owner vocab");
  FUN_14000ed00(param_2,"spatial_enc.stem.conv.weight",1,(longlong)*(int *)(param_1 + 0x3ac) + 0x1b,
                "assembled spatial planes (bits|coords|units|count|static)");
  return;
}

