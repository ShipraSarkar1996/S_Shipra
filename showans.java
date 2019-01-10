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
public class showans extends HttpServlet {
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        PrintWriter out = response.getWriter();
        try {
            String viewqa=request.getParameter("viewqa");
Class.forName("com.mysql.jdbc.Driver");
Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/bcapro", "root", "root");
if(viewqa.equals("Only Question"))
{
PreparedStatement ps=con.prepareStatement("select * from qans");
ResultSet rs=ps.executeQuery();
out.println("<table border=4 width=3 cellspacing=3 cellpadding=2>");
    out.println("<thead>");
        out.println("<tr>");
            out.println("<th>Name</th>");
            out.println("<th>Qid</th>");
            out.println("<th>Question</th>");
            out.println("<th>Subject</th>");
            
            
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

}
else if(viewqa.equals("Only Answer"))
{
PreparedStatement ps=con.prepareStatement("select * from answer");
ResultSet rs=ps.executeQuery();
out.println("<table border=4 width=3 cellspacing=3 cellpadding=2>");
    out.println("<thead>");
        out.println("<tr>");
            out.println("<th>Name</th>");
            out.println("<th>Qid</th>");
            out.println("<th>Answer</th>");
            out.println("<th>Subject</th>");
            
            
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

}
else{
PreparedStatement ps=con.prepareStatement("select qans.qid,qans.qa,answer.qa from qans,answer where qans.qid=answer.qid ");
ResultSet rs=ps.executeQuery();
out.println("<table border=4 width=3 cellspacing=3 cellpadding=2>");
    out.println("<thead>");
        out.println("<tr>");
            out.println("<th>Qid</th>");
            out.println("<th>Question</th>");
            out.println("<th>Answer</th>");
            
            
        out.println("</tr>");
    out.println("</thead>");
    out.println("<tbody>");
                while(rs.next())
                {
                 out.println("<tr>");
                out.println("<td>"+rs.getString(1) +"</td>");
            out.println("<td>"+rs.getString(2) +"</td>");
            out.println("<td>"+rs.getString(3) +"</td>");
            
        out.println("</tr>");
                }
                
out.println("</tbody>");
out.println("</table>");                

}
con.close();

        } catch (SQLException ex) {
            Logger.getLogger(showans.class.getName()).log(Level.SEVERE, null, ex);
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(showans.class.getName()).log(Level.SEVERE, null, ex);
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
