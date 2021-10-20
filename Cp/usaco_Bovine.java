import java.io.*;
import java.util.*;

public class BovineGeonomics {
	public static void main(String[] args) throws IOException {
		Kattio io = new Kattio("cownomics");

		int N = io.nextInt();
		int M = io.nextInt();
		// Representing each genome and individual characters in each genome
		int[][] spottyCows = new int[N][M];
		int[][] plainCows = new int[N][M];
		int possiblePositions = 0;

		// Fill arrays with appropriate chars
		for (int i = 0; i < N; i++) {
			String sequence = io.next();
			for (int j = 0; j < M; j++) {
				spottyCows[i][j] = sequence.charAt(j);
			}
		}

		for (int i = 0; i < N; i++) {
			String sequence = io.next();
			for (int j = 0; j < M; j++) {
				plainCows[i][j] = sequence.charAt(j);
			}
		}

		// Iterating through every character
		for (int i = 0; i < M; i++) {
			boolean duplicate = false;
			// Iterating through every genome
			for (int j = 0; j < N; j++) {
				// Comparing to every other genome
				for (int k = 0; k < N; k++) {
					/* 
					 * If there are any duplicates,
					 * then this isn't a possible position,
					 * so we can stop counting and make sure we don't count it
					 */
					if (spottyCows[j][i] == plainCows[k][i]) {
						duplicate = true;
						break;
					}
				}
			}
			/*
			 * If we haven't found any equal characters,
			 * then there are no duplicates and this is a possible sequence
			 */
			if (!duplicate) {
				possiblePositions++;
			}
		}
		io.println(possiblePositions);
		io.close();
	}
	//BeginCodeSnip{Kattio}
	static class Kattio extends PrintWriter {
		private BufferedReader r;
		private StringTokenizer st;
	
		// standard input
		public Kattio() { this(System.in, System.out); }
		public Kattio(InputStream i, OutputStream o) {
			super(o);
			r = new BufferedReader(new InputStreamReader(i));
		}
		// USACO-style file input
		public Kattio(String problemName) throws IOException {
			super(new FileWriter(problemName + ".out"));
			r = new BufferedReader(new FileReader(problemName + ".in"));
		}
	
		// returns null if no more input
		public String next() {
			try {
				while (st == null || !st.hasMoreTokens())
					st = new StringTokenizer(r.readLine());
				return st.nextToken();
			} catch (Exception e) { }
			return null;
		}
	
		public int nextInt() { return Integer.parseInt(next()); }
		public double nextDouble() { return Double.parseDouble(next()); }
		public long nextLong() { return Long.parseLong(next()); }
	}
	//EndCodeSnip
}
