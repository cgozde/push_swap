typedef struct s_value
{
	int				value;
	int				index;
	struct s_value	*next;
}		t_stack;

typedef ile t_stack adında struct s_value yapısını kullanmamız sağlanır.
struct s_value tipinde *next bağlı bir liste (linked list) oluşturmak için kullanılır ve bir sonraki düğümü işaret eder.