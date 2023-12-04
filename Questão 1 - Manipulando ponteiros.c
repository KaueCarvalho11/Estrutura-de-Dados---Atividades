int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;
}

/* Resposta

Ao final, os valores serão os seguintes:
 x = 3
 y = 4
 *p = 4
 
/*
