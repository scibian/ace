/* -*- c++ -*- */
//=============================================================================
/**
 *  @file    any_op_ch.h
 *
 *  Concrete visitor for the forward declared Component node.
 *  This one provides code generation for the Any operators.
 *
 *  @author Jeff Parsons
 */
//=============================================================================


#ifndef _BE_COMPONENT_FWD_ANY_OP_CH_H_
#define _BE_COMPONENT_FWD_ANY_OP_CH_H_

/**
 * @class be_visitor_component_fwd_any_op_ch
 *
 * @brief be_visitor_component_fwd_any_op_ch
 *
 * This is a concrete visitor for forward declared components that
 * generates the Any operator declaration.
 */
class be_visitor_component_fwd_any_op_ch : public be_visitor_decl
{

public:
  /// constructor
  be_visitor_component_fwd_any_op_ch (be_visitor_context *ctx);

  /// destructor
  ~be_visitor_component_fwd_any_op_ch (void);

  /// visit component_fwd
  virtual int visit_component_fwd (be_component_fwd *node);
};

#endif /* _BE_COMPONENT_FWD_ANY_OP_CH_H_ */
