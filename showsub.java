package main;
import java.sql.*;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
public class showsub extends HttpServlet {
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        PrintWriter out = response.getWriter();
        try {
      String qid=request.getParameter("qid");
 String sub=request.getParameter("sub");

Class.forName("com.mysql.jdbc.Driver");
Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/bcapro", "root", "root");

PreparedStatement ps=con.prepareStatement("select qans.qid,qans.qa,answer.qa,qans.sub from qans,answer where qans.sub=? and qans.qid=answer.qid");
ps.setString(1,sub);
ResultSet rs=ps.executeQuery();
out.println("<table border=4 width=3 cellspacing=3 cellpadding=2>");
    out.println("<thead>");
        out.println("<tr>");
            out.println("<th>qid</th>");
            out.println("<th>question</th>");
            out.println("<th>answer</th>");
            out.println("<th>subject</th>");
            
            
        out.println("</tr>");
    out.println("</thead>");
    out.println("<tbody>");
                while(rs.next())
                {
                 out.println("<tr>");
                out.println("<td>"+rs.getString(1) +"</td>");
            out.println("<td>"+rs.getString(2) +"</td>");
            out.println("<td>"+rs.getString(3) +"</td>");
            out.println("<td>"+rs.getString(4) +"</td>");
            
        out.println("</tr>");
                }
                
out.println("</tbody>");
out.println("</table>");                

con.close();


        } catch (SQLException ex) {
            Logger.getLogger(showsub.class.getName()).log(Level.SEVERE, null, ex);
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(showsub.class.getName()).log(Level.SEVERE, null, ex);
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
