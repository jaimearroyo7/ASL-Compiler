
// Generated from Asl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "AslParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by AslParser.
 */
class  AslListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(AslParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(AslParser::ProgramContext *ctx) = 0;

  virtual void enterFunction(AslParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(AslParser::FunctionContext *ctx) = 0;

  virtual void enterParameters(AslParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(AslParser::ParametersContext *ctx) = 0;

  virtual void enterDeclarations(AslParser::DeclarationsContext *ctx) = 0;
  virtual void exitDeclarations(AslParser::DeclarationsContext *ctx) = 0;

  virtual void enterVartype(AslParser::VartypeContext *ctx) = 0;
  virtual void exitVartype(AslParser::VartypeContext *ctx) = 0;

  virtual void enterVariable_decl(AslParser::Variable_declContext *ctx) = 0;
  virtual void exitVariable_decl(AslParser::Variable_declContext *ctx) = 0;

  virtual void enterArray(AslParser::ArrayContext *ctx) = 0;
  virtual void exitArray(AslParser::ArrayContext *ctx) = 0;

  virtual void enterType(AslParser::TypeContext *ctx) = 0;
  virtual void exitType(AslParser::TypeContext *ctx) = 0;

  virtual void enterStatements(AslParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(AslParser::StatementsContext *ctx) = 0;

  virtual void enterReturnStmt(AslParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(AslParser::ReturnStmtContext *ctx) = 0;

  virtual void enterAssignStmt(AslParser::AssignStmtContext *ctx) = 0;
  virtual void exitAssignStmt(AslParser::AssignStmtContext *ctx) = 0;

  virtual void enterIfStmt(AslParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(AslParser::IfStmtContext *ctx) = 0;

  virtual void enterWhileStmt(AslParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(AslParser::WhileStmtContext *ctx) = 0;

  virtual void enterProcCall(AslParser::ProcCallContext *ctx) = 0;
  virtual void exitProcCall(AslParser::ProcCallContext *ctx) = 0;

  virtual void enterReadStmt(AslParser::ReadStmtContext *ctx) = 0;
  virtual void exitReadStmt(AslParser::ReadStmtContext *ctx) = 0;

  virtual void enterWriteExpr(AslParser::WriteExprContext *ctx) = 0;
  virtual void exitWriteExpr(AslParser::WriteExprContext *ctx) = 0;

  virtual void enterWriteString(AslParser::WriteStringContext *ctx) = 0;
  virtual void exitWriteString(AslParser::WriteStringContext *ctx) = 0;

  virtual void enterEls(AslParser::ElsContext *ctx) = 0;
  virtual void exitEls(AslParser::ElsContext *ctx) = 0;

  virtual void enterLeft_expr(AslParser::Left_exprContext *ctx) = 0;
  virtual void exitLeft_expr(AslParser::Left_exprContext *ctx) = 0;

  virtual void enterExprIdent(AslParser::ExprIdentContext *ctx) = 0;
  virtual void exitExprIdent(AslParser::ExprIdentContext *ctx) = 0;

  virtual void enterArithmetic(AslParser::ArithmeticContext *ctx) = 0;
  virtual void exitArithmetic(AslParser::ArithmeticContext *ctx) = 0;

  virtual void enterRelational(AslParser::RelationalContext *ctx) = 0;
  virtual void exitRelational(AslParser::RelationalContext *ctx) = 0;

  virtual void enterLogicalOp(AslParser::LogicalOpContext *ctx) = 0;
  virtual void exitLogicalOp(AslParser::LogicalOpContext *ctx) = 0;

  virtual void enterUnary(AslParser::UnaryContext *ctx) = 0;
  virtual void exitUnary(AslParser::UnaryContext *ctx) = 0;

  virtual void enterValue(AslParser::ValueContext *ctx) = 0;
  virtual void exitValue(AslParser::ValueContext *ctx) = 0;

  virtual void enterParenthesis(AslParser::ParenthesisContext *ctx) = 0;
  virtual void exitParenthesis(AslParser::ParenthesisContext *ctx) = 0;

  virtual void enterFuncID(AslParser::FuncIDContext *ctx) = 0;
  virtual void exitFuncID(AslParser::FuncIDContext *ctx) = 0;

  virtual void enterSimpleID(AslParser::SimpleIDContext *ctx) = 0;
  virtual void exitSimpleID(AslParser::SimpleIDContext *ctx) = 0;

  virtual void enterArrayID(AslParser::ArrayIDContext *ctx) = 0;
  virtual void exitArrayID(AslParser::ArrayIDContext *ctx) = 0;


};

