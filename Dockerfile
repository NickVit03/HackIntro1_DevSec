# Χρησιμοποίησε μια έκδοση της Python
FROM python:3.9-slim

# Βάλε ένα δικό σου label για να είναι μοναδικό
LABEL maintainer="NickVit03"
LABEL description="My unique homework container"

WORKDIR /app
COPY app.cpp .

CMD ["gcc", "app.cpp", "-o", "app", "&&", "./app"]