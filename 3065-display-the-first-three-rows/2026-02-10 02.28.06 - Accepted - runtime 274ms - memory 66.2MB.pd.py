import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    top_three=employees.head(3)
    return top_three
    