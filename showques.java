package main;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
public class showques extends HttpServlet {

    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        PrintWriter out = response.getWriter();
        try {
   String name=request.getParameter("name");
           String quan=request.getParameter("quan");
           String qid=request.getParameter("qid");
           String qa=request.getParameter("qa");
           String sub=request.getParameter("sub");
            Class.forName("com.mysql.jdbc.Driver");
  Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/bcapro", "root", "root");
  
           if(quan.equals("Question")){
   PreparedStatement ps=con.prepareStatement("insert into qans values(?,?,?,?)");
 ps.setString(1, name);
 ps.setString(2, qid);
 ps.setString(3,qa );
ps.setString(4, sub);

   ps.executeUpdate(); 
     out.println("successful");
 out.println("<a href=finalquesans.jsp>back</a>");
           }
           else
           {
  PreparedStatement ps=con.prepareStatement("insert into answer values(?,?,?,?)");
  ps.setString(1, name);
 ps.setString(2, qid);
 ps.setString(3,qa );
ps.setString(4, sub);

   ps.executeUpdate(); 
     out.println("successful");
 out.println("<a href=finalquesans.jsp>back</a>");

  
           }
           con.close();

        } catch (SQLException ex) {
            Logger.getLogger(showques.class.getName()).log(Level.SEVERE, null, ex);
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(showques.class.getName()).log(Level.SEVERE, null, ex);
        } finally {            
            out.close();
        }
    }

    // <editor-fold defaultstate="collapsed" desc="HttpServlet methods. Click on the + sign on the left to edit the code.">
    /** 
     * Handles the HTTP <code>GET</code> method.
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /** 
     * Handles the HTTP <code>POST</code> method.
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /** 
     * Returns a short description of the servlet.
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>
}
