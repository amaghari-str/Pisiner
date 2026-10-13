items = ["123-Clown Act, 456-Juggling, 789-Magic Show"]

# If input comes as a single comma-separated string, normalize it into a list
# of "code-Name" strings.
if len(items) == 1 and "," in items[0]:
    items = [part.strip() for part in items[0].split(",") if part.strip()]

def get_name(item):
    return item.split("-", 1)[1].strip()

codes = [s.split("-", 1)[0] for s in sorted(items, key=get_name)]
print(", ".join(codes))
