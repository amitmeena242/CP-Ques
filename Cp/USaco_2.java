import java.io.*;
import java.util.*;

public class triangles{

	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(new File("triangles.in"));
		PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("triangles.out")));
		int N = sc.nextInt();
		int[][] vertices = new int[N][2]; // Store the vertices in a 2D array

		for(int i= 0; i < N; i++){
			vertices[i][0] = sc.nextInt(); // Read in the x-coordinate
			vertices[i][1] = sc.nextInt(); // Read in the y-coordinate
		}

		int ans = 0;
		for(int i = 0; i < N; i++){
			int a_x = vertices[i][0];  int a_y = vertices[i][1]; // Iterate for the first vertices of the triangle.
			for(int j = 0; j < N; j++){
				int b_x = vertices[j][0];  int b_y = vertices[j][1];
				for(int k = 0; k < N; k++){
					int c_x = vertices[k][0];  int c_y = vertices[k][1];

					int area = Math.abs((a_x  * (b_y - c_y)) + (b_x * (c_y - a_y)) + (c_x * (a_y - b_y ))); // Calculate the area of the three triangles

					if((a_x == b_x || a_x == c_x || c_x == b_x) && (a_y == b_y || a_y == c_y || c_y == b_y)) { // Check if the triangle has any sides parallel to the X-axis and the Y-axis.
						ans = Math.max(ans, area); // Store the maximum area.
					}

				}
			}
		}
		out.println(ans); // Print the max area.
		out.close();
	}
}
