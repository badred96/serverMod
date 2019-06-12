modded class Math
{
	static float product(int Px, int Py, int Ax, int Ay, int Bx, int By)
	{
	  return (Bx - Ax) * (Py - Ay) - (By - Ay) * (Px - Ax);
	}
}